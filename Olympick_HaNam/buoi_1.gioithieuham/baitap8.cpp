#include<bits/stdc++.h>
  using namespace std;
       int main ()
{        int i=0,n;
	       do  
{            cout << "nhap n=";
               cin >>n;            }
	             while (n<1&&n>n); 
                   for(i=0;i<n;i++)
			         if (i*i<n*2)
                       cout << i*i<<" ";
	                    return 0;
	}
