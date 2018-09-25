#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n,m,i=1; cin>>n>>m;

     while(true)
     {
       m=m-i;
       i++;
       if(i==(n+1)) i=1;
         if(m<i)  break;
     }
     cout<<m;
    return 0;
}
