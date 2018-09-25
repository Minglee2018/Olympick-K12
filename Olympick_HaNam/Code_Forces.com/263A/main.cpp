#include<bits/stdc++.h>
using namespace std;
int a[5][5];
int main ()
{
    int x=0,y=0;
    for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>a[i][j];
        if(a[i][j]==1){
           x=j;y=i;
          }
       }
    }
   x=abs(x-2);
   y=abs(y-2);
   cout<<endl;
   cout<<x+y;
   return 0;
}
