#include <bits/stdc++.h>

using namespace std;

int main ()
 {
     long long n,a=0,b=0;cin>>n;
     for(int i=0; i<=n;i++)
     {

         if((n-i*4)%7 == 0)
            {
                a=i,b=(n-i*4)/7;
                break;
            }
     }
     if(b<0 || a==b && b==0)
     {
         cout<<-1;
         return 0;
     }
     for(int i=1; i<=a; i++)
        cout<<4;
      for(int j=1; j<=b; j++)
        cout<<7;
      return 0;
 }
