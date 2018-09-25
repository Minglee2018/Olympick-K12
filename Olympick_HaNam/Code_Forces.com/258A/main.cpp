#include <bits/stdc++.h>
using namespace std;

int main()
{
   string a; cin>>a;
   int d=a.length();
   for(int i=0;i<a.length();i++)
   {
       if(a[i]=='0')
       {
           a.erase(i,1); break;
       }
   }
   if(d==a.length())
    a.erase(0,1);
   cout<<a;
    return 0;
}
