#include<bits/stdc++.h>
 using namespace std; 
 
   int nt( int x) 
   { bool isoke=true;
      if(x<2)
     isoke=false;
       else 
        { for(int i=2;i<x;i++)
           {if(x%i==0) 
            isoke=false;
		   }
		} if(isoke)
        return true;
    }
     
    int main()
     {  int n,s=0;
     	 cin>>n; 
        for(int i=2;i<=n;i++)
         {  if(n%i==0&&nt(i)==true)
           {cout<<i<<" "; 
           s+=i;
		   }
		 }
		 cout<<s;
		  return 0;
	 }
