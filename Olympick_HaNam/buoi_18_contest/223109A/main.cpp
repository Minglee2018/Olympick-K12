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
   sort(a,a+n);
   cout<<sc<<"\n";
   sc-=sf;
   for(int i=0; i<t; i++)
   {
       ll ans=0,j=n-1;
       cout<<sc<<"\n";
       while(a[j].second-a[j].first*t <a[i].first){
            ans+=abs(min(a[j].second-a[i].first*t,0ll));
        j--;
       }
      sc-=(sf-ans);
   }

 return 0;
}
