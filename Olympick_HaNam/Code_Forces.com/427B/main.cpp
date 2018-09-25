#include <bits/stdc++.h>

using namespace std;
long long n,t,c,z=0,k=0;
int main(){
    cin>>n>>t>>c;
    for(long long i=0;i<n;i++){
        long long a; cin>>a;
        if(a<=t)
            z++;

        else if(a>t)
            z=0;
        if(z>=c && a<=t)
            k++;
        else if(a>t)
            z=0;
    }
    cout<<k;
    return 0;
}
