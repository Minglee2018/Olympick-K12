#include<bits/stdc++.h>
 using namespace std;
  int sont(int x)
    {
	   int i; bool isoke=true;
	 if(x<2)
	cout <<x<< " ";
	 else   
	 for(int i=2;i<x;i++)
       {      if(x%i==0)
         isoke=false;
                          }
        if(isoke==true)
        cout<< x<<" ";
   	}
   int main()
    { 
    int n;
    cin>> n;
    for(int j=1;j<=n;j++)
      sont(j) ;
 
      return 0;
            }
