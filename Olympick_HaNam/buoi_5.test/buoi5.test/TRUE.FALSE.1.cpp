#include<bits/stdc++.h>
 using namespace std; 
  void Fibonaci( int x,long long a,long long b)
    { double kq;
	  if(x>1)
	  { kq=a+b;
	  cout<<kq<<" ";
		  Fibonaci(x-1,b,kq); 
	   	}  
     
	}
  int main (void) 
   {   unsigned int n;
       cin>>n; 
       if(n>=1&&n<=50)
       Fibonaci(n+1,1,0);
      
  return 0;
   }
