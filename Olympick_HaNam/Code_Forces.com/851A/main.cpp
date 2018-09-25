#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k,t;
    cin>>n>>k>>t;
    if(t==0){
        cout<<0;
        return 0;
    }

    if(t>=0 && t<k){
         cout<<t;
         return 0;
    }
    else if(t>=k && t<=n){
        cout<<k;
        return 0;
    }
    else if(t>n && t<= n+k){
        cout<<k-t+n;
        return 0;
    }
    return 0;
}
