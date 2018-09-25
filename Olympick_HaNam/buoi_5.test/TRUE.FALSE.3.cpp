#include<bits/stdc++.h> 
 using namespace std; 
  int main() 
    { unsigned int n,i,a=1,b=1;
      long long kq=0;
       cin>>n;
        if(n<=1)
        cout<<a;
        else if(n==2)
        cout<<a<<" "<<b;
        else if(n>=3)
	    {   cout<<1<<" "<<1;
		   while(n>=3)
		      { kq=a+b; 
		       cout<<" "<<kq<<" ";
		         b=a;
		         a=kq;
		         n--;
		      } 
		  
		  } 
     return 0;
     
	}
