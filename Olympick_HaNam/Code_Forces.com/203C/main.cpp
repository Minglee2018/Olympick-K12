#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,d,z,x,ans,dem;
pair<ll,int> b[1000005];

int main(){

   cin>>n>>d>>z>>x;
   for(int i=0; i<n; i++){
    ll t,k;  cin>>t>>k;
    b[i].first=t*z+k*x,b[i].second=i+1;
   }
   sort(b,b+n);
   for(int i=0; i<n; i++)
   {
      if(ans+b[i].first<=d)
        ans+=b[i].first,dem++;
      else
        break;
   }
   cout<<dem<<endl;
   for(int i=0;i<dem; i++)
    cout<<b[i].second<<" ";
    return 0;
}
