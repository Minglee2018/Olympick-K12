#include<bits/stdc++.h>
  using namespace std;
      int kiemtra(int x)
         {  bool isoke= true;
             if(x<1)
             isoke=false;
             else
              { for(int i=2;i<x;i++)
                if(x%i==0)
                isoke=false;
              }  
             
         	 return isoke;
		 }
      
int main(void)  
{   
      int n,i,max=n/2;  
         cout << "nhap n ="<< " ";
          cin>>n;
           for (i=n/2;i<n;i++)
	       { 
	             if(kiemtra(i)==true)
	               if(max<i)
	                 max=i;
	      }
	             cout <<max<<" "; 
	                  int nt=n/2;
	                    for(int j=n/2;j<max;j++)
	          {           if(kiemtra(j)==true)
	                        if(nt<j)
	                          nt=j;
			  }
	             cout<<nt;
}
  
   
   
   
   
   
