#include<bits/stdc++.h>
 using namespace std; 
   int main ()
    {   int a,b,c;
    	cout << "nhap 3 canh cua tam giac:";
    	 cin >>a; cin >>b; cin >>c;
    	  bool isoke = true;
    	   if(a<0|| b<0||c<0) isoke= false;
    	    if((a+b)<c||(a+c)<b||(b+c)<a) isoke = false;
    	     if (isoke==true) cout <<"yes";
    	      else 
    	       cout <<"no";
    	        return 0;
    	    
	}
