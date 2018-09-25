#include<bits/stdc++.h>
  using namespace std; 
   int main () 
   {  int n,s=0,u=0; 
     do{cin>>n; 
	 }while(n<100);
    for(int i=2;i<=n;i++)  //sua thanh for(int i=2;i<=n;i++)
     {if (n%i==0)
      u=n/i;
      {if((u)<n&&(u)%2!=0) 
      break; 
  	  }
   	 }
	  cout << u<<" ";
   	 return 0;
   }
