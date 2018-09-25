#include <bits/stdc++.h>
#define maxn 1000000
#define ll long long
using namespace std;
ll a[maxn],m,n;
ll binary_search(ll x)
{
    ll left=1,right=n,ans=0;
    while(left<=right)
    {
        ll mid=(left+right)/2;
        if(a[mid] <= x)
        {
             ans=mid,left=mid +1;
        }
        else if(a[mid] == x)
        {
            ans=mid,left=mid+1;
        }
        else if(a[mid] > x)
        {
            right=mid-1;
        }
    }
    return ans;
}
int main(){
    cin>>n>>m;
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(ll j=1; j<=m; j++)
    {
        ll x; cin>>x;
        cout<<binary_search(x)<<" ";
    }
    return 0;
}
