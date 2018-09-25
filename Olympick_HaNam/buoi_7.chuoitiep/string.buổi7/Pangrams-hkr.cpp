#include<bits\stdc++.h>
 using namespace std;
   bool Chek_Pangrams(string x)
   {  int i,j,dem=0;
   	  string Lowercase="abcdefghijklmnopqrstuvwxyz";
   	  string Uppercase="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   	  for(i=0;i<Lowercase.length();i++){
   	  	for(j=0;j<x.length();j++){
   	  		   if(x[j]==Lowercase[i] || x[j]==Uppercase[i] )
   	  		   {dem++;
   	  		   break;
					}
			 }
		 }
   	  if(dem==26) 
      return true;
   	  
   	  return false;
   }
    
 int main(void) 
  {  string a;  
     getline(cin,a); 
     if(Chek_Pangrams(a))
	 cout<<" Pangrams";
	 else
	 cout<<" not Pangrams";
	  
  }
