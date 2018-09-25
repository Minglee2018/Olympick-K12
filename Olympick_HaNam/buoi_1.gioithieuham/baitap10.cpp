#include<bits/stdc++.h>
 using namespace std;
   int main ()
    {  int i,n;   bool isoke = true;
         do
		  {
		   cout<< "nhap n:";
            cin>>n;
               }
              while ( n<10);
                for(i=2;i<n;++i) 
				
				{ if(n%i==0) isoke= false;
				}
				 if (isoke==true)
                  cout<<" yes" <<endl;
                   else 
                    cout <<"no "<< endl;
                     return 0;
    	
	}

