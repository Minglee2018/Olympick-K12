#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    long long a[n],sum=0,ans=0;
    for(int i=0; i<n; ++i){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%n!=0){
        cout<<"-1";
        return 0;
    }
    sum/=n;
    for(int i=0; i<n; ++i){
       if(a[i]<sum){
         ans+=abs(a[i]-sum);
       }
    }
    cout<<ans;
    return 0;
}
