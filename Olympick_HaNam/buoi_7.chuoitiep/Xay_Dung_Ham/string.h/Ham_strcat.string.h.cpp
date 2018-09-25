#include<bits\stdc++.h>
#define maxn 1001 
using namespace std; 
 int main() 
  {  char a[maxn],b[maxn];
      
      gets(a);
      gets(b);
      int n=strlen(a)-1;
      int m=strlen(b)-1;
      for(int i=0;i<m+n;i++){
      	a[i+n+1]=b[i];
      	
	  }
      puts(a);
      return 0;
  }
