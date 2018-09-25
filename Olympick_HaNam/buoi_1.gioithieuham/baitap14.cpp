#include<bits/stdc++.h>
 using namespace std;
  int main () 
  {
	int a,b,i,max;
       do {
   	    cout << "nhap a va b";
   	     cin >>a; cin >>b; }
   	      while (a<0||b<0);
   	         if(a>b) max=a; else max=b;
   	        for(i=1;i<=max;i++)
   	         if(a%i==0&&b%i==0)
   	          cout<< i<<endl;
   	           return 0;
   }
