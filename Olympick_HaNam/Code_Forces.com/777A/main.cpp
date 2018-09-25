#include<bits/stdc++.h>
using namespace std;

 int main ()
 {
    string a="LMR";
   long long n,m=600; int x;
   cin>>n>>x;
   while(m<n){
    m=m+600;
   }
  if(n>100000)
    n=n-m+600;
   for(int i=1;i<=n;i++){
        if(i%2==0)
            swap(a[1],a[2]);
        else if(i%2!=0)
            swap(a[0],a[1]);
    }
   if(a[x]=='L')
    cout<<0;
   else if(a[x]=='M')
    cout<<1;
   else
    cout<<2;
     return 0;
 }




