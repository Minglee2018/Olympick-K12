#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,z,i=1,dem=0; cin>>n>>m>>z;
    if(n>m)
    swap(n,m);
    int d=m;
  while(d<=z){

    if(d%n==0)
        dem++;
        i++;
        d=m*i;
  }
  cout<<dem;
    return 0;
}
