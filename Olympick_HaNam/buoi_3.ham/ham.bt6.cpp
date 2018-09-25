#include<bits/stdc++.h>
  using namespace std; 
     int Kiem_Tra(int n) 
       { int s=0;
       	  for(int i=1;i<=n;i++)
       	   {if(n%i==0)
       	   s=s+i;
			  }
       	   return s;
	   }
	int main ()
	 {  int k;
	 cin>> k; 
	  if(abs(2*k)==Kiem_Tra(abs(k))) 
	   cout<<"yes";
	   else
	   cout<<"no";
	 	return 0;  
	 }
