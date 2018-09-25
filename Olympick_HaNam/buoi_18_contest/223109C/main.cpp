#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
ll m,n,c[1000000+15],temp,z;
int main()
{
   cin>>n>>m;
   for(int i=0; i<n; i++){
    ll x,y; cin>>x>>y;
    if(temp>x) z++;
    temp=max(temp,y);
   }
   for(int i=0; i<m; i++)cin>>c[i];
   sort(c,c+m);
   ull ans=0;
   for(int i=0; i<z;i++){
        ans+=c[i];
   }
   cout<<ans;
    return 0;
}
