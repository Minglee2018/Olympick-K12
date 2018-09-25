#include<bits/stdc++.h>
  using namespace std;
           int nguyento(int x)
{            int j;
               bool isoke =true;
                if (x==1&&x==2&&x==3)
                  cout <<x;
			        else 
{                     for (j=2;j<x;j++)
{                       if( x%j==0)
{                         isoke =false; }}
	                        if(isoke)
                              cout<< x<< endl;}
			                    return 0; }
							   int main ()
    {                        int n,i;
                            cout <<"nhap n=";
    	                   cin >> n;
    	                 for(i=1;i<=2*n;i++)
    	                nguyento(i);
    	               return 0;
	}
