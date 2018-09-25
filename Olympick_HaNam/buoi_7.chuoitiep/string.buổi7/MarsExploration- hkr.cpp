#include<bits\stdc++.h>
 using namespace std; 
 int main() 
  {  string s;
      char a[1001];
     int i,j,n,dem=0;
    cin>>s;
    n=s.length();
    for(i=0;i<n;i++){
    a[i]='S';
	}
    for(j=1;j<n;j=j+3){
    	a[j]='O';
	}
   for(i=0;i<n;i++){
   	if(s[i]!=a[i])
   	dem++;
   }
   cout<<dem;
   return 0;
  }
