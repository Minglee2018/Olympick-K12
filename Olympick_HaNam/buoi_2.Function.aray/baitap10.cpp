#include<bits/stdc++.h>
 using namespace std;
   void phantich (int x,int i)
    {      if((x%i==0)&&(x==i))
           {
	             cout<<i<<endl;
	               return ;
		   }
	      if(x%i==0)
            {
			    cout<< i<<"*";
                phantich(x/i,i);
                
			}
          else if(x%i!=0)
            phantich(x,i+1);
      }
	 
 int main ()
     	{   int n;
	        cin>>n;
		    bool isoke=false;	   
	        for(int i=2;i<n;i++)
              {   if(n%i==0)
                  isoke=true;
              }   if(isoke==true)
            phantich(n,2);
			return 0;	
	     }
