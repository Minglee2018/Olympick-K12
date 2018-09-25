#include<bits\stdc++.h>
using namespace std; 
 int main() 
   { char a[1001]; 
     gets(a);
     for(int i=0;i<strlen(a);i++){
     	if(a[i]>='A' && a[i]<='Z')
     	a[i]+=32;
	 }
       puts(a);
     return 0;
   }
