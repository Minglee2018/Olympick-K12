#include<bits/stdc++.h>
   using namespace std;
      int kiemtra( int x,int y)
	     { bool test=true;
	         if(x==0)
	           test=false;
	             else if(y%x!=0)
	               test=false;
	                 return test;
	     }        
      
	   int main() 
       {          int a[1111],n,tong=0;
                     cout<<"nhap n="<<endl;
                     cin>>n;
           for(int i=0;i<n;i++)
               {
               	 cout<<"a["<<i<<"]="<<endl;
               	 cin>>a[i];
               }
			     cout<<"cac so la uoc cua n:"<<endl;
           for(int k=0;k<n;k++)
              {
			      if(kiemtra(a[k],n)==true)
                           {  
						      tong=tong+a[k];
						      cout<<a[k]<<" "<<endl;
				            }
			  }
       	                          cout<<"tong cac uoc cua n:"<<endl;
       	                           cout<<tong;
                                      return 0; 
	   }
