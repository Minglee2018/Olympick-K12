#include <bits/stdc++.h>
#define maxn 100001
#define ONLINE_JUDGE 1
using namespace std;
int n,m,T,P[maxn][20];//n là số lượng node(vertex), m là số lượng cạnh (edge), T là nút gốc ban đầu(root)
vector<int> tree[maxn];
int height[maxn];
void AddEdge(int u, int v)
{
    tree[u].push_back(v);// đỉnh u là cha của đỉnh v
    tree[v].push_back(u);// đỉnh v là cha của đỉnh u
}
void DFS(int cur, int prev)
// cur là current là node hiện thời đang xét là node nào, prev là previous là nút cha của nút cur
{
    height[cur]=height[prev]+1;// độ sâu của node cur sẽ bằng độ sâu của cha nó là prev +1.
    P[cur][0]=prev;//P là sparse table, p[cur][0]=prev có ý nghĩa là cha thứ 2^0 của của là prev do định nghĩa bên trên hàm
    for(int i=0;i<tree[cur].size();i++)//xét tất cả những con của node cur
    {
        if(tree[cur][i]!=prev)// nút prev đã được xét ở trên nên k xét lại node prev trong tập các nút con
        {
            DFS(tree[cur][i],cur);// lúc này cur sẽ thành nút cha và tree[cur][i] sẽ là nút con.
        }
    }
}
void CalculateSparseTable(int n)
//tính cái bảng sparse table
{
    // trên hàm DFS chúng ta đã tính P[i][0] rồi nên chúng ta sẽ k cần phải tính lại ở đây nữa
    // tuy nhiên chúng ta phải khởi tạo ban đầu tất cả các giá trị của sparse table là -1;
    // và p[i][j]=-1 có ý nghĩa là không tồn tại cha thứ 2^j của i
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
// hàm nhằm mục đích đưa 2 đỉnh u v về cùng height H nào đó
{
    // đưa h[u] = h[v];
    if(height[v]==H)// đỉnh v là u chưa cùng height và đưa đỉnh u về cùng bậc vs đỉnh v
    {
        for(int i=log2(height[u]);i>=0;i--)
        {
            if(height[u]-Calculate(i)>=height[v])
                u=P[u][i];
        }
    }
    else//height[v]!=H đưa đỉnh v
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
// tìm cha chung của u và v
{
    int ans=-1;
    // không làm mất tính tổng quát ta cho đỉnh u luôn là đỉnh mà height lớn hơn
    if(height[u]<height[v])
        swap(u,v);
    //Balance(u,v,height[v],1);
    // đưa đỉnh u về cùng bậc với đỉnh v
    for(int i=log2(height[u]);i>=0;i--)
    {
        if(height[u]-Calculate(i)>=height[v])
            u=P[u][i];
    }
    if(u==v) return u;
    // đoạn này là tìm cha chung gần nhất
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

    cin>>n>>m>>T;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        AddEdge(x,y);
    }
    height[0]=0;
    DFS(T,0);//0 luôn là cha của nút gốc.
    CalculateSparseTable(n);
    int Q;//Q queries
    cin>>Q;
    for(int i=1;i<=Q;i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<"LCA("<<x<<","<<y<<")="<<LCA(x,y)<<endl;
    }
}
