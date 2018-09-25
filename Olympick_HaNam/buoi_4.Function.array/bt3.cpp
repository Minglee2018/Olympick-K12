#include<bits/stdc++.h>
using namespace std;
   bool chekprime(int x)
      { if(x<2) return false;
        if(x==2)  return true;
         for(int i=2;i<x;i++)
             if(x%i==0)
             return false;
             return true;
		  
	   } 
  int main()
   { int n,s=0;
    cin>>n; 
    for(int i=1;i<=n;i++)
      { if(chekprime(i)==true)
          s+=i;
	  }
	  cout <<s<<" ";
   }
