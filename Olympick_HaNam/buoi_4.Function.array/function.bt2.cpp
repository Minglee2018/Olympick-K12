#include<bits/stdc++.h>
 using namespace std;
  long long Giai_Thua(int x)
   {   unsigned long long s; 
      if(x<1)
       return 1;
       else
	 while(x>1)
	    { s=s*x;
	     x--;
		}
		return s;
	  } 
  int main() 
   { int n;
    cin>>n;
     cout<<Giai_Thua(n);
     return 0;
   }
   
