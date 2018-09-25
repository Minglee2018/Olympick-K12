#include<bits/stdc++.h>
  using namespace std; 
    bool CheckPrime(int x) 
      { if(x<2) return false;
        if(x==2) return true;
      for(int i=2;i<x;i++)
           if(x%i==0)
           return false;
            return true;
          
	  }
   int main () 
    { int n,i,j;
     cin>>n;
     for( i=n-1;i>=n/2;i--)
	 {if(CheckPrime(i)==true)
	     break;
	  }
	 for( j=i-1;j>=n/2;j--)
	  if(CheckPrime(j)==true)
	   {cout<<j;
	    break;
	   }
	  return 0;
	}
