#include<bits/stdc++.h>
  using namespace std;
    int main ()
{      int a[100],i,n,tg=0,j;
       do
	   {
	       cin>>n;
       }
	   while(n<1);

             for (i=0;i<n;i++)
{              cout<< "a["<<i<<"]=";
                  cin>> a[i]; }

                   for(i=0;i<=n-2;i++)  
                  {   for (j=i+1;j<=n-1;j++)   
                       {       if(a[i]> a[j])
                              { tg=a[i];
                                a[i]=a[j];
                                a[j]=tg;
							  }
					   }
				  }
                            for (i=0;i<n;i++)
                             cout<< a[i]<<" ";
                             
				                for(i=0;i<=n-2;i++)  
                  {   for (j=i+1;j<=n-1;j++)   
                       {       if(a[i]< a[j])
                              { tg=a[i];
                                a[i]=a[j];
                                a[j]=tg;
							  }
					   }
				  }               
				             for (i=0;i<n;i++)
                                cout<< a[i]<<" ";               
	 	                       return 0;
}
