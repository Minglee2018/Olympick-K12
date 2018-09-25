#include<bits\stdc++.h>
using namespace std; 
 int main() 
  { char s[100];
  bool k=true;
    int i,j; 
    gets(s); 
    if(strlen(s)%2!=0&&(strlen(s)-1)>=1)
     k=false;
     else
     if(strlen(s)%2==0)
     {for(i=0;i<strlen(s)/2;i++)
      { if(s[i]!=s[strlen(s)-1-i])
         k=false;
	  }
	 }
     if(k)
     cout<<"yes";
     else
     cout<<"no";
   return 0;
  }
