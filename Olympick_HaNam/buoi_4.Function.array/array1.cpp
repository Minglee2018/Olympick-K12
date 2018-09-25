#include<bits/stdc++.h>
#define maxn 10001
 using namespace std;
  int main ()
    { int a[maxn],n,i;
      cin>>n;
	  for( i=0;i<n;i++)
	   cin>>a[i];
	  for(i=n-1;i>=0;i--)
	   cout<<a[i]<<" ";
	  return 0;
     
	}
