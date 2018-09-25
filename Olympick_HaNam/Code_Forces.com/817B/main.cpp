#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[1000005],i,ans;
int main()
{
// n*(n-1)(n-2)/6
// because nCk= n!/(k!*(n-k)!=n!/(6*(n-3)!)
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
        sort(a,a+n);
        for( i=3; i<n && a[i]==a[2]; i++){
        }
        ans=i-2;
        if(a[1]==a[2]){
            ans*=i-1,ans/=2;
            if(a[0]==a[1])
                ans*=i,ans/=3;
        }
        cout<<ans;
    return 0;
}

