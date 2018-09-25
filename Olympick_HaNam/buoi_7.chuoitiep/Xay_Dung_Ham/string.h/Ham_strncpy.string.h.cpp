#include<bits\stdc++.h>
#define maxn 1001
using namespace std; 
 int main() 
  {  int n,i;
   char a[maxn],b[maxn]; 
   gets(a); 
   cin>>n;
   if(n<strlen(a)){
   	for(i=0;i<n;i++)
   	b[i]=a[i];
   	
   }
   puts(b);
   return 0;
  }
