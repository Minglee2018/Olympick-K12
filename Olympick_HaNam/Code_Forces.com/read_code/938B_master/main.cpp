#include<bits/stdc++.h>
using namespace std;

#define int ll
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int arr=2e5;

bool check(char c)
{
    return(c=='i' || c=='o' || c=='a' || c=='u' || c=='e' || c=='y');
}

int a[arr];

signed main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    a[0]=1;
    a[n+1]=1e6;

    int ans=1e18;

    for (int i=0;i<=n;i++)
        ans=min(max(a[i]-1,ll(1e6)-a[i+1]),ans);
    cout<<ans;
}
