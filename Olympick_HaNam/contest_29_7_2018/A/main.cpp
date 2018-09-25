#include <bits/stdc++.h>
#define ll long long
#define maxn 100005
using namespace std;
int n,Q1,Q2,Q;
ll a[maxn], And[4*maxn], Or[4*maxn], maxx=1;
void buid(int node,int l,int r){
    if(l==r){
        And[node]=a[l];
        Or[node]=a[l];
        return ;
    }
    int m=(l+r)/2;
    buid(2*node,l,m);
    buid(2*node+1,m+1,r);
    And[node] = And[2*node]&And[2*node+1];
    Or[node]  = Or[2*node]|Or[2*node+1];
}
void update(int node,int l,int r,int pos,ll val)
{
        if(l==r){
            And[node]=val;
            Or[node] =val;
            return ;
        }
        int m=(l+r)/2;
        if(m>=pos)
            update(2*node,l,m,pos,val);
        else
            update(2*node+1,m+1,r,pos,val);
        And[node]=And[2*node]&And[2*node+1];
        Or[node] =Or[2*node]|Or[2*node+1];
}
int query1(int node,int l,int r,int low,int high)
{
    if( l>high || r<low){
        return maxx;
    }
    if(low <=l && r<=high){
        return And[node];
    }
    int m=(l+r)/2;
    return query1(2*node,l,m,low,high)&query1(2*node+1,m+1,r,low,high);
}
int query2(int node,int l,int r,int low,int high)
{
    if( l>high || r<low){
        return 0;
    }
    if(low <=l && r<=high){
        return Or[node];
    }
    int m=(l+r)/2;
    return query2(2*node,l,m,low,high)|query2(2*node+1,m+1,r,low,high);
}
int main()
{
//    freopen("input.txt","r",stdin);
    for(int i=1; i<=32; i++)
        maxx*=2;
    maxx--;
    cin>>n>>Q1>>Q2;
    Q=Q2+Q1;
    for(int i=1; i<=n; i++) cin>>a[i];
    buid(1,1,n);
    while(Q--){
        ll type,x,y;
        cin>>type>>x>>y;
        if(type==1)
                update(1,1,n,x,y);
        else
                cout<<query1(1,1,n,x,y)+query2(1,1,n,x,y)<<endl;
               // cout<<"*"<<query1(1,1,n,x,y)<<" "<<query2(1,1,n,x,y)<<endl;
    }
    return 0;
}
