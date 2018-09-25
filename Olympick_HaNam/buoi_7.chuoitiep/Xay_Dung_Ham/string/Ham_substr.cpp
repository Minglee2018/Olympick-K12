#include<bits\stdc++.h>
using namespace std; 
 int main() 
   { int m,n,j=0;
     string a,b;
	 getline(cin,a);
   cout<<"nhap vi tri"<<endl;
   cin>>m;
   cout<<"nhap so ky tu"<<endl;
   cin>>n;     
      for(int i=0;i<=n;i++)
       b+=a[i+m];
         cout<<b;
    return 0;
   }
