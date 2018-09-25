#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[1000000+10],ans=2;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];sort(a+1,a+n+1);
    ll z=a[n]/2;
    if(n==1){
        cout<<1; return 0;
    }
    else if(z==0) {
        cout<<n; return 0;
    }
    ll r=n,k;
    int l=lower_bound(a,a+n+1,a[n]/2)-a;
    k=l;
    cout<<l<<endl;
    while(l>0 && r>k){
        if(a[r]/a[l]>=2)
            ans+=2,r--,l--;
    }
    ans-=2;
    cout<<n-ans+ans/2;
    return 0;
}
