/*     !ya khoda!     */
#include <bits/stdc++.h>
#define ll long long
#define ld long double

#define pp push
#define po pop()
#define pb push_back
#define pf push_front
#define pob pop_back()
#define pof pop_front()

#define F first
#define S second

#define mkp make_pair
#define pll pair<ll,ll>

#define coutghat(x)      cout<<tolower(x);
#define coutashar(x,d)   cout<<fixed<<setprecision(x)<<(ld)d
#define IOS ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0);
//#define poow(a,b,M)   b?(poow((a*a)%M,b/2)%M * (b&1?a))%M:1 ;
/*==========================================================================*/
using namespace std;
//#pragma optimize O3
// 107,109, 211,223, 307, 401,409, 503,509, 601,607, 701,709, 809, 907, 1009
/*==========================================================================*/
const int N=1e6+100 , M=300 , LG=30 , base=2;
const int MOD=1e9+7 , mod=1e9+9;
const ll  INF=1e9   , inf=1e18 ;
ll n,m,a[N],b[N],c[N],src , x,y,w , col,scc[N] , sum,su[N] , k,d[N],vis[N];
vector<ll>adj[N],radj[N] , v[N],g[N];
stack<ll>stk;
queue<ll>q;
/*==========================================================================*/
void dfs1(int x)
{
	vis[x]=1;
	for(auto y:adj[x])
		if(!vis[y])
			dfs1(y);
	stk.push(x);
}
/*==========================================================================*/
void dfs2(ll x,ll c)
{
	vis[x]=1 , scc[x]=c;
	for(auto y:radj[x])
		if(!vis[y])
			dfs2(y,c);
}
/*==========================================================================*/
ll bin(ll w)
{
	ll l=0,mid,r=INF;
	while(r-l>1)
	{
		mid=(r+l)/2;
		if(mid*(mid-1)/2>w)   r=mid;
		else                  l=mid;
	}
	if(r*(r-1)/2<=w)          return r;
	else                      return l;
}
/*==========================================================================*/
int main()
{
	IOS;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
		adj[a[i]].pb(b[i])  ,  radj[b[i]].pb(a[i]);
	}
	cin>>src;

	for(int i=1; i<=n; i++)
		if(!vis[i])
			dfs1(i);
	fill(vis,vis+N,0);
	while((ll)stk.size())
	{
		x=stk.top(),stk.pop();
		if(!vis[x])
			col++ , dfs2(x,col);
	}
	fill(vis,vis+N,0);
	fill(su,su+N,0);
	for(int i=1; i<=m; i++)
	{
		x=a[i] , y=b[i] , w=c[i];
		if(scc[x]==scc[y])
		{
			k=bin(w);
			sum=k*w , sum-=(k-1)*k*(k+1)/6;
			su[scc[x]]+=sum;
		}
		else
		{
			v[scc[y]].pb(scc[x]);
			g[scc[y]].pb(w);
			d[scc[x]]++;
		}
	}
	for(int i=1;i<=col;i++)
        if(d[i]==0)
            q.push(i);
	while(!q.empty())
	{
		x=q.front() , q.pop() , su[x]+=vis[x];
		for(int i=0; i<v[x].size(); i++)
		{
			y=v[x][i];
			d[y]--;
			vis[y]=max(vis[y],su[x]+g[x][i]);
			if(d[y]==0)
				q.push(y);
		}
	}
	return cout<<su[scc[src]] , 0;
}
