#include<bits\stdc++.h>
using namespace std; 
 int main() 
  {  string a,b;
    getline(cin,a);
    getline(cin,b);
    int ans=0;
    if(a>b)
    ans=2;
    else if(a<b)
    ans=-1;
    else
    ans=0;
    cout<<ans;
    return 0;
  }
