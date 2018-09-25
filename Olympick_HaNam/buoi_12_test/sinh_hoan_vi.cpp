#include<bits\stdc++.h>
using namespace std; 

 int main ( )
   {  int  a[1001],tg=0,i;
      long long n;
   	  cout<<"nhap n"<<endl;
   	  cin>>n; 
   	  int j=0;
   	  
    while(n!=0) 
	{  
	a[j++]=(long long)n%10;
    n=n/10;
	} 
	cout<<endl;	
   	 for( i=0;i<j-1;i++){
   	      if(a[i]>a[i+1])
   	       {
   	       	tg=a[i];
   	       	a[i]=a[i+1];
   	       	a[i+1]=tg;  break;
		   }   	     
		}
		for(int x=0;x<i;x++){
			for(int y=1;y<=i;y++){
				if(a[x]>a[y])
			        {	tg=a[x];
				        a[x]=a[y];
				        
						
						a[y]=tg;
					}
			}			
		}
        
        	for(int i=j-1;i>=0;i--)
        cout<<a[i]<<" ";
        
     	return 0;
   }
