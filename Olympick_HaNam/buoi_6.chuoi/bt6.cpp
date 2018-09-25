#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
int main() 
   {  string s; 
   char x[100];
      getline (cin,s);
          
    while (s[0]==' ')
     {  
        s.erase(s.begin()+0);
	 }
	while (s[s.length()-1]==' ') 
	   { 
	    s.erase(s.begin()+(s.length()-1));
	   }
		  for(int i=0;i<s.length();i++)
		  for(int j=0;j<s.length();j++)
                if(s[i]==' '&&s[i+1]==' ')
                  s.erase(s.begin()+i);
          for(int i=0;i<s.length();i++)
		   x[i]=s[i];  
		   strlwr(x);  
         if(x[0]>=97 && x[0]<=122)
             x[0]-=32;
		 
         for(int i=0;i<strlen(x);i++)
         {
		   if(x[i]==' ' && x[i+1]!=' ')
           x[i+1]-=32;
		 }
     cout<<x;
	
        return 0;
   }
