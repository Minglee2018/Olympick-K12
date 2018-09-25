#include<bits/stdc++.h>
 using namespace std;
   
   int main ()
   {
      int n,tongchan=2,tongle=1;
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
   for(int j=3;j<=n;j++)
  if(j%2==0)
   tongchan+=j;
   else
   tongle+=j;
   cout << tongchan<<" ";
   cout<< tongle<<" ";
  	  return 0;
  }
