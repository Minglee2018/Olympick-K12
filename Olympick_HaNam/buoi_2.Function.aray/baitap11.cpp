#include<bits/stdc++.h>
  using namespace std;
      int kiemtra(int x)
         {  bool k= true;
             if(x<1)
             k=false;
             else
              { for(int i=2;i<x;i++)
                if(x%i==0)
                k=false;
              }  
             
         	 return k;
		 }
      
int main(void)  
{   
      int n,i,max=n/2;  
         cout << "nhap n ="<< " ";
          cin>>n;
           for (i=n/2;i<n;i++)
	       { 
	         if(kiemtra(i)==true)
	          {  if(max<i)
	           
	             max=i;
			  }
	           
	           
	      }
	          cout <<max<<" "; 
}
  
   
