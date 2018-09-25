#include <bits/stdc++.h>
 using namespace std;
  int main ()
    {  int n,i,j;
    	cout << "nhap n=";
    	 cin>> n;
    	  for(j=1;j<=n;j+=2)
    	   cout <<j << endl;
    	    
			if (n%2==0)
			 {
			 	for (i=n;i>=1;i-=2)
			 	cout <<i<< endl;
			 } 
			 else
			 {
			 	  for(i=n-1;i>1;i-=2)
			 	   cout << i<< endl;
			  } 
	    return 0;
	}
