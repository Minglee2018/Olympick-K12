#include<bits/stdc++.h>
  using namespace std;
  int tong=0;
    int kiemtra( int x)
    {  bool nt=true;
         if(x<1)
           nt=false;
             else if(x==2)
           nt= true;
        else
        {  for(int j=2;j<x;j++)
           {  if(x%j==0) 
                 nt=false;
		   }
        	
		}
    	               return nt;
	}
 
int main()
    {       int n,a[111111];
              do
            {   cout<<"nhap n"<<endl;
			      if(n<0)
			        cout<<"nhap lai bro..))"<<endl; 
      	              cin>>n;
      	    }
	              while(n<0);
			        for(int i=0;i<n;i++)
        {             cout<<"a["<<i<<"]="<<"  ";
                         cin>>a[i];
	    }                   cout<< "tong cac so nt la:"<<endl;
	        
			for(int j=0;j<n;j++)
	         {
	         	  if(kiemtra(a[j])==true)
	         	      tong=tong+a[j];
			 }
	                     cout<< tong;
	                          return 0;
    }
	  
	  
	  
	  
	  
	  
	  
	  
	  
