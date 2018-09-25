
#include <bits/stdc++.h>
#define maxn 70005
using namespace std;
int n,Q,k;

int leaf[4*maxn],height[maxn],P[maxn][20];

vector <int> parent[maxn];

void AddEdge(int u,int v)
{
    parent[u].push_back(v);
    parent[v].push_back(u);
}
void DFS(int cur,int prev)
{
    height[cur]=height[prev]+1;
    P[cur][0]=prev;
    for(int i=0; i<parent[cur].size();i++){
        if(parent[cur][i]!=prev)
        {
            DFS(parent[cur][i],cur);
        }
    }

}
void SparseTable(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=log2(n); j++)
        {
            if(P[i][j-1]!=-1)
            {
                P[i][j]=P[P[i][j-1]][j-1];
            }
        }
    }
}
int LCA(int u,int v)
{
    if(height[u]<height[v])
        swap(u,v);
    for(int i=log2(height[u]); i>=0; i--)
    {
        if(height[u]-pow(2,i)>=height[v])
            u=P[u][i];
    }
    if(u==v) return u;
    for(int i=log2(height[u]); i>=0; i--)
    {
        if(P[u][i]!=P[v][i])
        {
            u=P[u][i];
            v=P[v][i];
        }
    }
    return P[u][0];
}
void Buid(int node,int l,int r)
{
    if(l==r){
        leaf[node]=l;
        return ;
    }
    int m=(l+r)/2;
    Buid(2*node,l,m);
    Buid(2*node+1,m+1,r);
    leaf[node]=LCA(leaf[2*node],leaf[2*node+1]);
}
int query(int node,int l,int r,int low,int high)
{
    if(low>r || high <l)
    {
        return low;
    }
    if(low<=l && r<=high)
    {
        return leaf[node];
    }
    int m=(l+r)/2;
    return LCA(query(2*node,l,m,low,high),query(2*node+1,m+1,r,low,high));
}
int main()
{
    ios::sync_with_stdio(false),cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    memset(P,-1,sizeof(P));
    cin>>n>>Q;
    k=n-1;
    while(k--){
        int u,v;
        cin>>u>>v;
        AddEdge(u,v);
    }
    height[0]=0;
    DFS(1,0);
    SparseTable(n);
    Buid(1,1,n);
    while(Q--){
        int x,y;
        cin>>x>>y;
        cout<<query(1,1,n,x,y)<<endl;
    }
    return 0;
}
