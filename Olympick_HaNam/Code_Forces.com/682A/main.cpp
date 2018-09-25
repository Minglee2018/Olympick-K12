#include<bits/stdc++.h>
using namespace std;
long long m,n,ans;
int main()
{
    cin>>n>>m;
    if(n>m) swap(n,m);
    for(int i=1;i<=n;i++){
        int z=((m+i)/5-i/5);
        ans+=z;
    }
    cout<<ans;
    return 0;
}
