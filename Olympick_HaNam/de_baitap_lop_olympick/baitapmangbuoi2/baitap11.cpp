#include<bits/stdc++.h>
 using namespace std; 
     int kiemtra(int x)
     {  bool kt=true;
      if(x%2==0)
       kt=false;
       return kt;
	 }
      
   int main ()
    { int n,i,j=0,k=0,a[1111],b[1111],c[1111];
        cin>> n; 
        cout<<endl;
          for(i=0;i<n;i++)
            cin>> a[i]; 
            
             for(i=0;i<n;i++)
              {  if(kiemtra(a[i])==true)
                   { 
				       b[j]=a[i]; j++;
				   }
				      else 
				    { 
					     c[k]=a[i]; k++;
					}
			  }    
			  
			         cout<< "mang cac so le la:"<<endl;
			       for(int h=0;h<j;h++)
			     cout<< b[h]<<" ";
			   cout<<endl;
			cout<<"mang cac so chan la:"<<endl;
		   for(int l=0;l<k;l++)
		 cout<<c[l]<<" ";
       return 0;
			
	}
	
