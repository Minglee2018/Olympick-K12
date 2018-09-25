#include<bits/stdc++.h>
  using namespace std;
      int main()
{      int i,n,x;
         do 
{          cout << "nhap n=";
             cin >> n;
                               }
                 while(n<1);  
               for(i=0;i<=n;i++) 
             if(pow(2,i)>n)
{          x=pow(2,i);
         break;
		                      }
       cout<< x<<" ";
     return 0;
   }
