#include <bits/stdc++.h>
#define max_val 999999990
#define maxn 101010
using namespace std;
int n,T,Q;
int a[maxn];
int tree[4*maxn];
int lazy[4*maxn];
void buid(int node,int l,int r)
{
    if(l==r){
        tree[node]=a[l];
        lazy[node]=0;
        return ;
    }
    int m = (l+r)/2;
    buid(2*node,l,m);
    buid(2*node+1,m+1,r);
    tree[node]=min(tree[2*node],tree[2*node+1]);
    lazy[node]=lazy[2*node]=lazy[2*node+1]=0;
}
void update(int node,int low,int high,int l,int r,int val)
{
    if(l>r)
        return ;
    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node];
        if(l!=r){
            lazy[2*node]+=lazy[node];
            lazy[2*node+1]+=lazy[node];
        }
        lazy[node] = 0;
    }
    // no overlap condition
    if(l>high || r<low)
        return ;
    if(low<=l && r<=high){
        tree[node]+=val;
        if(l!=r){
            lazy[2*node]+=val;
            lazy[2*node+1]+=val;
        }
        return ;
    }
    int m = (l+r)/2;
    update(2*node,low,high,l,m,val);
    update(2*node+1,low,high,m+1,r,val);
    tree[node]=min(tree[2*node],tree[2*node+1]);
}
int query(int low,int high,int l,int r,int node)
{
    if(l>r){
        return max_val;
    }
    if(lazy[node]!=0){
        tree[node]+=lazy[node];
        if(l!=r){
            lazy[2*node]+=lazy[node];
            lazy[2*node+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(l>high || r<low){
        return max_val;
    }
// total overlap
    if(low<=l && r<=high){
        return tree[node];
    }
    int m = (l+r)/2;
    return min(query(low,high,l,m,2*node),query(low,high,m+1,r,2*node+1));
}
int main()
{
    freopen("input.txt","r",stdin);
    cin>>T;
    for(int i=1; i<=T;i++){
        cin>>n>>Q;
        for(int j=1;j<=n; j++) cin>>a[j];
        cout<<"Case "<<i<<":"<<endl;
        buid(1,1,n);
        while(Q--){
            int type,x,y,val;
            cin>>type;
            if(type==1)
            {
                cin>>x>>y>>val;
                update(1,x,y,1,n,val);
            }
            else
            {
                cin>>x>>y;
                cout<<query(x,y,1,n,1)<<endl;
            }
        }
    }
    cout<<endl;
    for(int k=1; k<=4*n; k++)
        cout<<tree[k]<<" ";
    return 0;
}
