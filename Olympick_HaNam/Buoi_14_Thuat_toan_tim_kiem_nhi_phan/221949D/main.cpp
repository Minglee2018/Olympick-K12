#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,q;
   cin>>n>>q;
   long long a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   while(q--)
   {
       long long L,R,ans=0;
       cin>>L>>R;
       for(int i=0;i<n;i++)
       {
           if(a[i]>=L && a[i]<=R)
            ans++;
                if(a[i]>R) break;
       }
       cout<<ans<<endl;
   }

}
