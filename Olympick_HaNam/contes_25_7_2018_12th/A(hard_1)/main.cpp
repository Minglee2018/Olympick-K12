#include <bits/stdc++.h>
#define ll long long
#define Max_val 9999999999
#define maxn 100005
using namespace std;
ll a[maxn],leaf[4*maxn],n,t,q;
void buid(int node,int l,int r){
    if(l==r){
        leaf[node]=a[l];
        return ;
    }
    buid(2*node,l,(l+r)/2);
    buid(2*node+1,(l+r)/2+1,r);
    leaf[node]=min(leaf[2*node],leaf[2*node+1]);
}
void update(int node,int l,int r,int x,ll val)
{
    if(l==r && x==l){
        leaf[node]=val;
        return ;
    }
    if(x<=(l+r)/2)
        update(2*node,l,(l+r)/2,x,val);
    else
        update(2*node+1,(l+r)/2+1,r,x,val);
    leaf[node]=min(leaf[2*node],leaf[2*node+1]);
}
ll query(int node,int l,int r,int low,int high)
{
    if(l>=low && r<=high){
        return leaf[node];
    }
    if( r<low || l>high)
        return Max_val;
    return min(query(2*node,l,(l+r)/2,low,high),query(2*node+1,(l+r)/2+1,r,low,high));
}
int main()
{

    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int k=1;
    cin>>t;
    while(t--){
        cout<<"Case "<<k++<<":"<<endl;
        cin>>n>>q;
        for(int i=1; i<=n; i++) cin>>a[i];
        buid(1,1,n);
        while(q--){
            int d,x,y;
            cin>>d>>x>>y;
            if(d==1)
                update(1,1,n,x,y);
            else
              cout<<query(1,1,n,x,y)<<endl;
        }
    }
     return 0;
}
