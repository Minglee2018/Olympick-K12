#include <bits/stdc++.h>
#define maxn 100005
#define MAX_VALUE 10000000000
#define ll long long
using namespace std;
ll a[maxn],tree[4*maxn];
void Buid(int l,int r, int pos){
    if(l == r)
    {
        tree[pos]=a[l];
        return ;
    }
    int m=(l+r)/2;
    Buid(l,m,2*pos+1);
    Buid(m+1,r,2*pos+2);
    tree[pos]=min(tree[2*pos+1],tree[2*pos+2]);
}
ll query(int low,int high,int qlow,int qhigh,int pos){
        if(qlow <= low && qhigh >= high){
            return tree[pos];
        }
        if(qlow > high || qhigh < low){
            return MAX_VALUE;
        }
        int mid = (low+high)/2;
        return min(query(low, mid, qlow, qhigh, 2 * pos+1),query(mid + 1, high, qlow, qhigh, 2 * pos + 2));
}
void update(int l,int r,int x,ll val,int node){
    if(x>=l && x<=r)
        tree[node]=min(tree[node],val);
    if(l==r){
        tree[node]=val;
        return ;
    }
    int m=(l+r)/2;
    if(x<=m && x>=l){
        update(l,m,x,val,2*node+1);
        tree[2*node+1]=min(tree[2*node+1],val);
    }
    else {
        update(m+1,r,x,val,2*node+2);
        tree[2*node+2]=min(tree[2*node+2],val);
    }
}
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int n,T,Q;
    cin>>T;
    for(int p=1; p<=T; p++){
        cout<<"Case "<<p<<":"<<endl;
        cin>>n>>Q;
        for(int i=0; i<n; i++) cin>>a[i];
        Buid(0,n-1,0);
        while(Q--){
            ll x,y,d; cin>>d>>x>>y;
            if(d==1){
                update(0,n-1,x-1,y,0);
            }
            else{
                cout<<query(0,n-1,x-1,y-1,0)<<endl;
            }
        }
    }
    return 0;
}
