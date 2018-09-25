#include <bits/stdc++.h>

using namespace std;
int cout_res,res;
int main(){
    int n; cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
          if(a[i][j]==1)
            cout_res++;
        }
        if(cout_res>1) res++;
       cout_res=0;
    }
     cout<<res;
    return 0;
}
