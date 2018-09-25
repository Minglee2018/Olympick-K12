#include <bits/stdc++.h>
#define maxn 100005
using namespace std;
int a[maxn],seg[4*maxn];
void buid (int node,int l,int r)
{
    if(l==r){
        seg[node]=a[l];
        return;
    }
    int m=(l+r)/2;
    buid(2*node,l,m);
    buid(2*node+1,m+1,r);
    seg[node]=seg[2*node]+seg[2*node+1];
}
int query(int node, int l,int r,int low,int high){
        if(low <= l && high >= r)
            return seg[node];
        if(high <l || low > r)
            return 0;
        int m=(l+r)/2;
        return (query(2*node,l,m,low,high)+query(2*node+1,m+1,r,low,high));
}

int main()
{
    freopen("input.txt","r",stdin);
    int n; cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
     buid(1,0,n-1);
     //for(int i=1; i<4*n; i++) cout<<seg[i]<<" ";
    cout<<"nhap so truy van"<<endl;
    int q;
    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        cout<<query(1,0,n-1,x-1,y-1)<<endl;
    }
     return 0;
}
