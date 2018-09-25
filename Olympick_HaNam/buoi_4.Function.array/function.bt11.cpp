#include<bits/stdc++.h>
  using namespace std; 
    bool CheckPrime(int x) 
      {   
	    for(int i=2;i<=sqrt(x);i++)
           if(x%i==0) 
		   return false; 
           return true;		  
	  }
   int main () 
    { 
	 int n;
     cin>>n;
     for(int i=n-1;i>=n/2;i--)
	 {
	    if(CheckPrime(i)==true)
	    {
		  cout<<i;
	      break;
	    }
	 }
 
      return 0;
	}
