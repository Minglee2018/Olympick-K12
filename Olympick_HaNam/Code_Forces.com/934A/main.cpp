#include <bits/stdc++.h>

using namespace std;
int main()
{
   long long n,m,index=0,max=-1e18,a[100],b[100];
   cin>>n>>m;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<m;i++){
    cin>>b[i];
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i]*b[j]>max){
            max=a[i]*b[j];
            index=i;
        }
      }
   }
   max=-1e18;
   for(int i=0;i<n;i++){
        if(i!=index){
            for(int j=0;j<m;j++){
            if(max<a[i]*b[j])
            max=a[i]*b[j];
                   }
                }
             }
   cout<<max;
    return 0;
}
