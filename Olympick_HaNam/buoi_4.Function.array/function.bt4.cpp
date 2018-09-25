#include<bits/stdc++.h>
  using namespace std; 
 int main() 
    { int n;
     cin>>n;
     float s=1;
      for(int i=2;i<=n;i++)
       { s=s+(float)1/i;
	   }
      cout<<s;
      return 0;
	}
