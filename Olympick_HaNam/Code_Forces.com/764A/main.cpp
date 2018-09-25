#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,z,i=1,dem=0; cin>>n>>m>>z;
    if(n>m)
    swap(n,m);
    int d=0;
  while(true){
    d=m*i;
    i++;
    if(m%n==0)
        dem++;
        if(d>z) break;
  }
  cout<<dem;
    return 0;
}
