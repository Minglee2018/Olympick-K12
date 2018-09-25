#include <bits/stdc++.h>
#define maxn 700001
using namespace std;

int n,m,T,P[maxn][20];
vector<int> tree[maxn];
int height[maxn];
void AddEdge(int u, int v)
{
    tree[u].push_back(v);
    //tree[v].push_back(u);
}
void DFS(int cur, int prev)
{
    height[cur]=height[prev]+1;
    P[cur][0]=prev;
    for(int i=0;i<tree[cur].size();i++)
    {
        if(tree[cur][i]!=prev)
        {
            DFS(tree[cur][i],cur);
        }
    }
}
void CalculateSparseTable(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=log2(n);j++)
        {
            if(P[i][j-1]!=-1)
            {
                P[i][j]=P[P[i][j-1]][j-1];
            }
        }
    }
}
int Calculate(int y)
{
    int res=1;
    for(int i=1;i<=y;i++)
        res*=2;
    return res;
}
void Balance(int &u, int &v, int H)
{
    if(height[v]==H)
    {
        for(int i=log2(height[u]);i>=0;i--)
        {
            if(height[u]-Calculate(i)>=height[v])
                u=P[u][i];
        }
    }
    else
    {
        for(int i=log2(height[u]);i>=0;i--)
        {
            if(height[u]-Calculate(i)>=H)
            {
                u=P[u][i];
            }
            if(height[v]-Calculate(i)>=H)
            {
                v=P[v][i];
            }
        }
    }
}
int LCA(int u, int v)
{
    int ans=-1;
    if(height[u]<height[v])
        swap(u,v);
    for(int i=log2(height[u]);i>=0;i--)
    {
        if(height[u]-Calculate(i)>=height[v])
            u=P[u][i];
    }
    if(u==v) return u;
    for(int i=log2(height[u]);i>=0;i--)
    {
        if(P[u][i]!=P[v][i])
        {
            u=P[u][i];
            v=P[v][i];
        }
    }
    return P[u][0];
}
int main()
{
    T=1;
    int Q;
    cin>>n>>Q;
    for(int i=1;i<=n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        AddEdge(x,y);
    }
    height[0]=0;
    DFS(T,0);
    CalculateSparseTable(n);
    for(int i=1;i<=Q;i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<LCA(x,y)<<endl;
    }
}
