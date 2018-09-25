#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n; cin>>n; int a[n],ans=1;
   for(int i=0; i<n; i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   for(int i=0; i<n; i++)
   {
       if(ans<=a[i]) ans++;
   }
   cout<<ans;
    return 0;
}
