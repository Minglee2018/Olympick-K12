#include <bits/stdc++.h>
using namespace std;

int main()
{
   int m,n;
   cin>>m>>n;
   int a[m][n];
   for(int i=0; i<m; ++i){
      for(int j=0; j<n; ++j){
        cin>>a[i][j];
      }
   }
   int q,p;
   cin>>q>>p;
   int b[q][p];
   for(int i=0; i<q; ++i){
      for(int j=0; j<p; ++j){
        cin>>b[i][j];
      }
   }
//    for(int i=0; i<q; ++i){
//      for(int j=0; j<p; ++j){
//        cout<<b[i][j]<<" ";
//      }
//      cout<<"\n";
//   }
   int sum;
   int c[m][p];
   for(int i=0; i<m; ++i){
     for(int j=0; j<p; ++j){
        sum=0;
        for(int k=0; k<n; ++k){
            sum+=(a[i][k])*(b[k][j]);
        }
        c[i][j]=sum;

     }
   }
   cout<<m<<" "<<p<<"\n";
   for(int i=0; i<m; ++i){
     for(int j=0; j<p; ++j){
        cout<<c[i][j]<<" ";
     }
     cout<<"\n";
   }
   return 0;
}
