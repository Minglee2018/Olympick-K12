#include <bits/stdc++.h>
#define tt int
#define maxn 1000000
using namespace std;
tt a[4];
void ty(tt i){
     for(tt j=0; j<=1; j++){
          a[i]=j;
          if(i<3)
            ty(i+1);
           else if(i==3)
            {
                for(tt k=0; k<4 ;k++)
                    cout<<a[k];
                cout<<endl;
            }
      }
}
int main(){
    //freopen("output.txt","w",stdout);
   ty(0);
   return 0;
}
