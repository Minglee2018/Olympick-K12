#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll t,n,a[1000000];
void chemthan()
{
    a[0]=0,a[1]=1;ll ans=0;
    for(int i=2; i<=100000; i++)
    {
        if(i%2==0)
        a[i]=a[i/2];
        else
            a[i]=a[i/2+1]+a[i/2];
    }
}
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    chemthan();
    ll ans=0;
    cin>>t;
    while(t--){
    ll x; cin>>x;
    for(int i=0; i<=x; i++) ans=max(ans,a[i]);
    cout<<ans<<"\n";
    }
    return 0;
}
