#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,ans=0,res=1;
    cin>>n;
    pair<int, int> a[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i].second>>a[i].first;
    }
    sort(a,a+n);
    for(int i=n-1;i>=0 && res>0;i--)
    {
        ans+=a[i].second;
        res--;
        res+=a[i].first;
    }
    cout<<ans;
    return 0;
}
