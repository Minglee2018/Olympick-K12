#include<bits\stdc++.h> 
#include<string> 
using namespace std; 
 int main() 
  { string s;int i,sum=0;
  getline(cin,s);
    for(int i=0;i<s.length();i++) 
	  { if(s[i]>='0'&&s[i]<='9') 
	     {s[i]-=48;
		  sum=sum+s[i]; 
		 }
	   } 
	  
	   cout<<" "<<sum;
    
    return 0;
  }
