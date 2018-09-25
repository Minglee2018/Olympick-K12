#include<bits/stdc++.h>
 using namespace std; 
   int main(void) 
    {  int n,i,oke=1;
       cout<<"nhap n= "<<" "; 
       cin>>n;
        for(i=n/2;i>1;i--)
       {    if(i*i<n)
           {oke=i;
           break;
		   }
	   }
	   cout<<oke<<" ";
	}
