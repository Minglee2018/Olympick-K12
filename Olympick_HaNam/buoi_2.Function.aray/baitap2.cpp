#include<bits/stdc++.h>
 using namespace std;
   int giaithua(int x)
    {   if(x==0)
      return 1;
      else
      return x*giaithua(x-1);

	}
   int main ()
     
  {  int n;
   cin>> n;
 cout << giaithua(n)<<endl;
  	  return 0;
  }
