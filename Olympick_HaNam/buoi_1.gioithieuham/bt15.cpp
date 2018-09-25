#include<bits\stdc++.h>
using namespace std; 
 int main () 
  { int a,b,i=1,max=0,min=0;  
      cin>>a>>b; 
       max=(a>b) ? a:b;
       min=(a<b) ? a:b; 
      for(i=1;i<=max;i++) 
      if((min*i)%a==0 && (min*i)%b==0) 
         { cout<<min*i; 
          break;
		 }
   return 0;
  }
