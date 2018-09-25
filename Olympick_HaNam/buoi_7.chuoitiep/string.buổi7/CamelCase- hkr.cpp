#include<bits\stdc++.h>
#define maxn 10001
using namespace std; 
 int main() 
   { int i,k=0,a[maxn];
     string s;
	 getline(cin,s);
	 for(i=0; i<s.length();i++){
	 	if(s[i]>='A'&&s[i]<='Z')
	 	a[k++]=i;
	 } 
   cout<<endl;
   cout<<k+1;
   return 0; 
   }
