#include<bits/stdc++.h>
 using namespace std;
   
   int main ()
  
  {  int n,tong=0;
  do 
  {     cout<<"nhap n";
       cin>>n;
 
     if(n<0)
        {
   	     cout<< " nhap lai n"<< endl;
         cin>> n;
        }
     } 
	while(n<0);
   for(int j=1;j<=n;j++)
  { if(n%j==0)
   tong=tong+j;
  }
 cout << tong<<endl;
  	  return 0;
  }
