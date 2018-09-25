#include<bits\stdc++.h>
#define maxn 1001
using namespace std; 
 int main() 
   { int n,m,d=0,i;
   	 char a[maxn],b[maxn]; 
   	 gets(a);
     gets(b); 
     cin>>n;
    m=strlen(a)-1;
    d=strlen(b)-1;
    if(n<d){
    for(int i=0;i<n;i++)	
    	a[m+1+i]=b[i];
    	if(i==n-1)
    	a[m+n+1]=NULL;
	}
    else if(n>strlen(b) ||n==strlen(b)){
    	for(i=0;i<strlen(b);i++){
   	    a[m+1+i]=b[i];
   	    if(i==d)
   	     a[m+d+2]='\0';
         }
	   }
   
   puts(a);
   	 return 0;
   }
