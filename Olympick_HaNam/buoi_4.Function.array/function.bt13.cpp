#include<bits/stdc++.h>
  using namespace std;
   bool CheckPrime(int x) 
    { if(x<1) return false;
      if(x==2) return true;
       for(int i=2;i<x;i++)
         if(x%i==0)
          return false;
          return true;
		
	}
   int main() 
     {  int m,n,i; 
      cin>>m>>n;
       int max=(m>n) ? m:n;
       int min=(m<n)  ? m:n;
     for(i=min;i<=max;i++)
        { if(CheckPrime(i)==true)
          	cout<<i<<" ";
		}
       return 0;
	 }
