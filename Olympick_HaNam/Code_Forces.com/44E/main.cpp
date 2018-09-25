#include <bits/stdc++.h>

using namespace std;
long long k,a,b; string s,ans;
int main()
{
   cin>>k>>a>>b>>s;
   int i=0,m=a,n=b;
   if(b*k<s.length()) {cout<<"No solution"; return 0;}
   if(s.length()==b*k)
      while(s.length()!=0){
          while(n!=0)
          {
              ans+=s[i++],n--;
          }
          cout<<ans<<endl,ans.erase(0),i=0,n=b;
      }
   else if(s.length()==a*k)
      while(s.length()!=0){
         while(m!=0)
         {
            ans+=s[i++],m--;
         }
         cout<<ans,ans.erase(0),i=0,m=a;
      }
   else {
    int z=1;
        if(z==1){
            while(m!=0){
                ans+=s[i++],m--;
            }
            cout<<ans,ans.erase(0),s.erase(0,a-1),i=0,m=a,z=2;
        }
        else
           while(n!=0){
              ans+=s[i++],n--;
           }
           cout<<ans,ans.empty(),s.erase(0,b-1),i=0,n=b,z=1;
   }
    return 0;
}
