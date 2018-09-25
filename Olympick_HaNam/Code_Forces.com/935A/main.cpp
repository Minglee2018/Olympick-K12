#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0; cin>>n;
    int m=n/2;
    for(int i=1; i<=m;i++){
        int z=(n-i);
        if(z%i==0){
            ans++;
        }
    }
    cout<<ans;
}
