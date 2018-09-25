#include<bits/stdc++.h>
#include<iostream>
#include<string> 
 using namespace std; 
  int main() 
    {  int i,j,dem=0;  
	   char s1[100]; 
	   char s2[100]="abcdefghijklmpnoqrstvxywz";
	   int a[100]={0};
        gets(s1); 
      strlwr(s1);
	 for(i=0;i<strlen(s2);i++)
     for(j=0;j<strlen(s1);j++)
       { if(s2[i]==s1[j])
          a[i]++;
	   }
	   for(i=0;i<strlen(s2);i++) 
	    { cout<<s2[i]<<" "<<a[i];
	      cout<<endl;
	    }    
	    
      return 0; 
	}
