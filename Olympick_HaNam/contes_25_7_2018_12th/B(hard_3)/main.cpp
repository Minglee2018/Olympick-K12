#include <bits/stdc++.h>
#define maxn 555
#define min_val -999999
using namespace std;
int a[maxn][maxn],leaf[4*maxn][4*maxn],t,q,n;
void buid(int i,int node,int l,int r)
{
    if(l==r)
    {
        leaf[i][node]=a[i][l];
        return ;
    }
    buid(i,2*node,l,(l+r)/2);
    buid(i,2*node+1,(l+r)/2+1,r);
    leaf[i][node]=max(leaf[i][2*node],leaf[i][2*node+1]);
}
int query(int i,int node,int l,int r,int low,int high)
{
    if(l>=low && r<=high){
        return leaf[i][node];
    }
    if(l>high || r<low)
        return min_val;
    return max(query(i,2*node,l,(l+r)/2,low,high),query(i,2*node+1,(l+r)/2+1,r,low,high));
}

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int p=1; cin>>t;
    while(t--)
    {
        cout<<"Case "<<p++<<":"<<endl;
        cin>>n>>q;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cin>>a[i][j];
            }
        }
        for(int i=1; i<=n; i++)
            buid(i,1,1,n);
        while(q--){
            int i,j,s,ans=0;
            cin>>i>>j>>s;
            for(int t=i; t<=i+s-1; t++)
                ans=max(ans,query(t,1,1,n,j,j+s-1));
            cout<<ans<<endl;
        }
    }

    return 0;
}
