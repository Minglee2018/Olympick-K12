#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,k,l,f,ans=0; cin>>n>>f;
    ll a[n];
    for(int i=0; i<n; i++){
         cin>>k>>l;
         ans+=min(k,l);
         a[i]=min(2*k,l)-min(k,l);
    }
    sort(a,a+n);
    for(int i=n-1; i>=n-f; i--)
        ans+=a[i];
    cout<<ans;
    return 0;
}

