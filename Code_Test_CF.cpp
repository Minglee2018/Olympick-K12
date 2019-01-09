#include<bits/stdc++.h>

#define debug(a) cerr<<#a<<" = "<<(a) << endl
#define debug2(a,b) cerr<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b) << endl
#define debug3(a,b,c) cerr<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<", "<<#c<<" = "<<(c) << endl
#define debug4(a,b,c,d) cerr<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<", "<<#c<<" = "<<(c) <<", "<<#d<<" = "<<(d) << endl
#define all(s) s.begin(), s.end()

#define pb push_back
#define fi first
#define se second
#define rbe rbegin()
#define in(m) m.insert
#define sc(a) scanf("%d", &a)
#define sc2(a,b) scanf("d", &a, &b)
#define sc3(a,b,c) scanf("d%d", &a, &b, &c)
#define mid(l,r) (l+r)/2
#define si(x) scanf("%d",&x)
#define lli pair<ll, int>
#define ll  pair<ll,ll>
#define ii  pair<int,int>
#define ll long long
#define ull unsigned long long
#define ui unsigned int

#define FOR(i,x,y)  for(int i=x;i<=y;i++)
#define For(i,x,y)  for(int i=x;i<y;i++)
#define REP(i,x,y)  for(int i=x;i>=y;i--)
#define Rep(i,x,y)  for(int i=x-1;i>=y;i--)

#define _e		    2.7182818284590452354
#define M_LOG2E		1.4426950408889634074
#define M_LOG10E	0.43429448190325182765
#define _ln2		0.69314718055994530942
#define _ln10		2.30258509299404568402
#define pi		    3.14159265358979323846
#define pi_2		1.57079632679489661923
#define pi_4		0.78539816339744830962
#define _sq2		1.41421356237309504880
#define Sq(i)	    sqrt(i);
#define EPSILON     0.000001

#define Invoker()   ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define bye(a)      return a;

#define inf = 1e18;
#define mod = 1000000007;
#define max_val 999999999
#define maxn  101010
using namespace std;

int a[maxn],tree[4*maxn],lazy[4*maxn];

void buid(int node, int l,int r)
{
    if(l==r)
    {
        tree[node]=a[l];
        lazy[node]=0;
        return ;
    }
    buid(2*node+1,l,mid(l,r));
    buid(2*node+2,mid(l,r)+1,r);
    tree[node] = min(tree[2*node+1],tree[2*node+2]);
    lazy[node] = lazy[2*node+1] = lazy[2*node+2] = 0;
}
void update(int node,int low,int high,int l,int r,int val)
{
    if(l>r)
        return;
    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node];
        if(l!=r)
        {
            lazy[2*node+1]+=lazy[node];
            lazy[2*node+2]+=lazy[node];
        }
        lazy[node] = 0;
    }
    if(l>high || r<low)
        return ;
    if(low<=l && r<=high)
    {
        tree[node]+=val;
        if(l!=r)
        {
            lazy[2*node+1]+=val;
            lazy[2*node+2]+=val;
        }
        return ;
    }
    update(2*node+1,low,high,l,mid(l,r),val);
    update(2*node+2,low,high,mid(l,r)+1,r,val);
    tree[node] = min(tree[2*node+1],tree[2*node+2]);
}
int query(int node,int low,int high,int l,int r)
{
    if(l>r)
        return max_val;
    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node];
        if(l!=r)
        {
            lazy[2*node+1]+=lazy[node];
            lazy[2*node+2]+=lazy[node];
        }
        lazy[node] = 0;
    }
    if(l>high || r<low)
        return max_val;
    if(low <=l && r<=high)
        return tree[node];
    return min(query(2*node+1,low,high,l,mid(l,r)),query(2*node+2,low,high,mid(l,r)+1,r));
}
int main()
{

    //freopen("input.txt","r",stdin);
    int n,Test;
    cin>>Test>>n;
    For(i,0,n)  cin>>a[i];
    buid(0,0,n-1);
//    For(i,0,4*n) cout<<tree[i]<<" ";
//    cout<<endl;
    FOR(i,1,Test)
    {
        int type,x,y,val;
        cin>>type;
        if(type==1)
        {
            cin>>x>>y>>val;
            update(0,x,y,0,n-1,val);
            For(i,0,4*n) cout<<tree[i]<<" ";
            cout<<endl<<" lazy-> ";
            For(i,0,4*n) cout<<lazy[i]<<" ";
            cout<<endl;
        }
        else
        {
            cin>>x>>y;
            cout<<query(0,x,y,0,n-1);
        }
        cout<<endl;
    }
    return 0;
}



















