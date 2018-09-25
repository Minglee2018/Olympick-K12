#include<bits/stdc++.h>
  using namespace std;
    
   int main()
    {
    	 int x,max=0,u=0;
    	  cout<< "nhap x="<<" ";
    	  cin >>x;
    	  //kiem tra so nguyen to
    	    for( int i=x/2;i<x;i++)
	{
	      if(x<=2)
	      u=x;
	        else 
                 {
		    bool k=true;
	     for(int i=2;i<x;i++)
	      {
			if(x%i==0)
	         k=false; }
	      if(k=true)
	          u=x;
	              }
					}

    	  
    	 { if(max < u)
    	     max = u;
		  }
	      cout << max <<" ";
	     
	     return 0;
    	
	}
