#include <bits/stdc++.h>

using namespace std;
long long ans=0;
int u[22],z=0;
int main(){
    int n; cin>>n;
    while(n--){
     cin>>z;
     z+=10;
        ans+=u[20-z];
        u[z]++;
    }
    cout<<(long long)ans;
    return 0;
}
