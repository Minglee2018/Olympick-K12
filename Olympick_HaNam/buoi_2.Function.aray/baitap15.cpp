#include <bits/stdc++.h>
using namespace std;

#define e 0.00001
int main (void)
 {   int a,k=1,i=0;
    float x[1111];
     cin>>a;
 	 x[0]=a;
  while (k>=e)
 	 { i++;
	  x[i]=(x[i-1]*x[i-1]+a)/(2*x[i-1]);
 	   k=abs((x[i-1]-x[i])/(x[i]));
  }  
	  for(int j=0;j<1000;j++) 
	     {i++;
		x[i]=(x[i-1]*x[i-1]+a)/(2*x[i-1]);
		 }
	  cout <<"can bac 2 cua "<<a<<" = "<<x[i]<<" ";
 	 return 0;
 }
