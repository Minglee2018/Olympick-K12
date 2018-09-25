#include<bits/stdc++.h>
#define maxn 10001
  using namespace std;
  long long a[maxn];
  
   int main() 
  {  unsigned int n,i;
       cin>>n;
     a[0]=1; a[1]=1;
          if(n==1)
       	    cout<<a[0];
   	      else if(n==2)
   	         cout<<a[0]<<" "<<a[1]<<" ";
   	      else if(n>=3)
   	         {  
   	           cout<<a[0]<<" "<<a[1]<<" ";
			   for(i=2;i<=n-1;i++)
			     {
			     	 a[i]=a[i-1]+a[i-2];
			     	 cout<<a[i]<<" ";
				 }
   	         
			  }
         return 0;
   }
