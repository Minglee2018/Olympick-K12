#include <bits/stdc++.h>

using namespace std;
long long n,x,y,z=1,a[3];
int main()
{
   cin>>n;
   long long i=n+1;
   while(true){
    z=z*i;
         if((z*n)%abs(n-z)==0){
            y=(z*n)/abs(n-z);
            break;
         }
         i++;
   }
   a[0]=n;
   a[1]=y;
   a[2]=z;
   sort(a,a+3);
   for(int i=0;i<3;i++){
    cout<<a[i]<<" ";
   }
    return 0;
}
