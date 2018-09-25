#include<bits/stdc++.h>
 using namespace std;
   float tong(float x)
    {   if(x==1)
    return 0;
    else
    return (1+1/x+1/tong(x-1));
        
	}
   int main ()
     
  {  int n;
   cin>> n;
 cout << tong(n)<<endl;
  	  return 0;
  }
