#include<bits/stdc++.h>
 using namespace std;
  
  int main (void)
{        int n,j,tong=0,tong1=0;
    cout << "nhap n"<< endl;
    cin>>n;
        for( int x=1;x<=n;x++)
      {        bool isoke =true;
                if (x<2)
                tong1=tong1+x;
			        else 
{                     for (j=2;j<x;j++)
{                       if( x%j==0)
{                         isoke =false; }}
	                        if(isoke)
                           tong=tong+x;  }
			                    }
			  cout<<tong+tong1<<" ";
			return 0;             
	   }     
