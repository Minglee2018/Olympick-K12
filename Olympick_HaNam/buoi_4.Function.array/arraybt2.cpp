#include<bits/stdc++.h>
#define maxn 1001
 using namespace std;
  int main()
  { int c[maxn],n,a=0,b=0;
      cin>>n;
     for(int i=1;i<=n;i++)
      {cin>>c[i]; 
      if(c[i]<0) a++;
       else
      if(c[i]>0) b++;
	  }
	  cout<<a<<" "<<b;
	  return 0;
  }
