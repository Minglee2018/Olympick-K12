#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,t,sf,sc;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL);
   cin>>n>>t;
   pair<ll,ll> a[n+10];
   for(int i=0; i<n; i++){
    cin>>a[i].second>>a[i].first;
    sf+=a[i].first,sc+=a[i].second;
   }
   cout<<sc<<"\n";
   sc-=sf;
   for(int i=0; i<t; i++)
   {
       ll ans=0;

       for(int j=0; j<n; j++){
        a[j].second=max(a[j].second-a[j].first,0ll);
         ans+=min(a[j].second,a[j].first);
       }
     cout<<ans<<endl;
   }
 return 0;
}
