#include<bits/stdc++.h>
  using namespace std;
           int nguyento(int x)
{            int j;
               bool isoke =true;
                if (x==1&&x==2)
                  cout <<x;
			        else 
{                     for (j=2;j<x;j++)
{                       if( x%j==0)
{                         isoke =false; }}
	                        if(isoke)
                              cout<< x<< endl;}
			                    return 0; }
       int main() 
{        int a,b,max,min,i;
           cout <<"nhap a va b="<< endl;
             cin >> a;  cin >>b;

                            max = (a > b) ? a:b;
                            min = (a < b) ? a:b;
	                   for (i=min;i<max;i++)
                         nguyento(i);
                           return 0;
                                            }
