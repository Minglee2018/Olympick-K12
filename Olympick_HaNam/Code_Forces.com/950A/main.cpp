#include <bits/stdc++.h>
#define ll long long
using namespace std;

void chemthan(){
    ll l,r,a,ans,z; cin>>l>>r>>a;
    ans=min(l,r)*2,r=min(max(l,r),abs(l-r));
    if( r>=a) ans+=a*2;
    else a-=r,z=a/2,ans+=r*2+z*2;
    cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    chemthan();
    return 0;
}
