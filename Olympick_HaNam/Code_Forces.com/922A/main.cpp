#include <bits/stdc++.h>

using namespace std;
long long x,y;
 main()
{
   cin>>x>>y;
    long long z=(x-y+1);
   if(y==0 || y==1 && x!=0) {cout<<"NO"; return 0;}
   if(z%2==0 && z>=0){
     cout<<"YES"; return 0;
   }
 cout<<"NO";
}
