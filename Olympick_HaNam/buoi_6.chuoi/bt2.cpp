#include<bits\stdc++.h>
  using namespace std; 
   int main() 
     { int i,dem=0;
      string s;
      getline(cin,s);
       for(i=0;i<s.length();i++)
         if(s[i]=='x')
           dem++;
          
     while(dem!=0)
	 { for(i=0;i<s.length();i++)
       	 if(s[i]=='x')
       	  {s.erase(s.begin()+i);
       	  dem--;
			 }
	 }

  cout<<s;

         return 0;
	 }

