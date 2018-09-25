#include<bits/stdc++.h> 
  using namespace std; 
    int main () 
     {  int a[1000],n,i,k,j,c,tg;
         cin>>n;
          for(i=0;i<n;i++)
           cin>>a[i];
           
           
           	  for(i=0;i<=n-2;i++)  
                    for (j=i+1;j<=n-1;j++)   
                       {       if(a[i]> a[j])
                              { tg=a[i];
                                a[i]=a[j];
                                a[j]=tg;
							  }
					   }
				 
                 
		       
				  
			    cout <<endl;
			   for(i=0;i<n;i++)
	              cout<< a[i]<<" ";		 
			 
			 
	 }
