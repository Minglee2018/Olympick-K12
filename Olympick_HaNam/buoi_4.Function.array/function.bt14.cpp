#include<bits/stdc++.h>
 using namespace std;
  int main() 
  {  int n; cin>> n;
     for( int i=n-1;i>1;i--) 
       { if(sqrt(abs(i))*sqrt(abs(i))==i)
        cout<<i<<" "; 
	   }
	   return 0;
  }
