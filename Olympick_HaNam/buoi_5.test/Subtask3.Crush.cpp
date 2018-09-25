#include<bits/stdc++.h>
 using namespace std; 
  int main() 
    { unsigned long long n,m=0;
     double s=0;
      cin>>n;
       if(n%2==0)
        { m=n+1; 
		 n=n/2;
          cout<<n*m;
		}
		else
		{ m=(n+1)/2;
		cout<<n*m;
		}
     return 0;
	}
