#include <bits/stdc++.h>
#define ll long long
#define Max_val 9999999999
#define maxn 100005
using namespace std;
ll a[maxn],leaf[4*maxn],tree[4*maxn],n,t,q;
void buid_and(int node,int l,int r){
    if(l==r){
        leaf[node]=a[l];
        return ;
    }
    buid_and(2*node,l,(l+r)/2);
    buid_and(2*node+1,(l+r)/2+1,r);
    leaf[node]=(leaf[2*node] + leaf[2*node+1]);
}
void update_and (int node,int l,int r,int x,ll val)
{
    if(l==r && x==l){
        leaf[node]=val;
        return ;
    }
    if(x<=(l+r)/2)
        update_and(2*node,l,(l+r)/2,x,val);
    else
        update_and(2*node+1,(l+r)/2+1,r,x,val);
    leaf[node]=leaf[2*node] + leaf[2*node+1];
}
ll query_and(int node,int l,int r,int low,int high)
{
    if(l>=low && r<=high){
        return leaf[node];
    }
    if( r<low || l>high)
        return 0;
    return query_and(2*node,l,(l+r)/2,low,high) + query_and(2*node+1,(l+r)/2+1,r,low,high);
}

void buid_or(int node,int l,int r){
    if(l==r){
        tree[node]=a[l];
        return ;
    }
    buid_or(2*node,l,(l+r)/2);
    buid_or(2*node+1,(l+r)/2+1,r);
    tree[node]=(tree[2*node] or tree[2*node+1]);
}

void update_or (int node,int l,int r,int x,ll val)
{
    if(l==r && x==l){
        tree[node]=val;
        return ;
    }
    if(x<=(l+r)/2)
        update_or(2*node,l,(l+r)/2,x,val);
    else
        update_or(2*node+1,(l+r)/2+1,r,x,val);
    tree[node]=tree[2*node] or tree[2*node+1];
}

ll query_or (int node,int l,int r,int low,int high)
{
    if(l>=low && r<=high){
        return tree[node];
    }
    if( r<low || l>high)
        return 0;
    return query_or(2*node,l,(l+r)/2,low,high) or query_or(2*node+1,(l+r)/2+1,r,low,high);
}
int main()
{

    ios_base::sync_with_stdio(false),cin.tie(NULL);

        int q1,q2,q;
        cin>>n>>q1>>q2; q=q1+q2;
        for(int i=1; i<=n; i++) cin>>a[i];
        buid_and(1,1,n);
        //buid_or(1,1,n);
        while(q--){
            int d,l,r;
            cin>>d>>l>>r;
            if(d==1)
                {
                    update_and(1,1,n,l,r);
                }
            else
              cout<<query_and(1,1,n,l,r)<<endl;
        }

     return 0;
}
