#include <bits/stdc++.h>
#define ll long long
using namespace std;
pair <ll,ll> a[1000000];
ll n,r,x,ans,z,y;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n>>r>>x;
    for(int i=0; i<n; i++){
        cin>>a[i].second>>a[i].first;y+=a[i].second;
    }
    sort(a,a+n);
    z=x*n-y;
    if(z<=0)
    {
        cout<<0; return 0;
    }
    for(ll i=0; i<n; i++)
    {
        ll k=r-a[i].second;
        if(k>0 && z>k)
        z-=k,ans+=k*a[i].first;
        else if(z<=k && k>=0 && z>=0){
            ans+=z*a[i].first;
            cout<<max(ans,0ll); return 0;
        }
    }
    return 0;
}
