#include<bits/stdc++.h>
using namespace std;
 int n;
 int main()
  { cin>>n;
      int dem1=1;
      int dem2=2;
  for(int i=3;i<=n;i++)
    { 
      if(i%2!=0)
      dem1+=i;
      else
      dem2+=i;
	}
  	 cout<<dem1<<" "<<dem2;
  }
