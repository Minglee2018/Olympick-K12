#include<bits/stdc++.h>
#define e 0.00000001
  using namespace std;
   int main (void) 
     {  int b,n=1;
	double a[10001];
       cin>>b;
       a[0]=b;
    while(abs((a[n-1]-a[n])/a[n])>=e)
	  { n++;
	    a[n]=(a[n-1]*a[n-1]+a[0])/(2*a[n-1]);
        
	   }
         
       cout<<a[n]<<" ";
	 }
