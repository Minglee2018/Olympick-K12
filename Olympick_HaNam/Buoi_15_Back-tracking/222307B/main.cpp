#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll Max,Min=10e12,z,ans=-1,x;
int main()
{
    int n; cin>>n;
    pair <ll,ll> a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i].first>>a[i].second;
       if(i==0) Max=a[i].second,Min=a[i].first;
       else
       if(i!=0) Max=max(Max,a[i].second),Min=min(Min,a[i].first);
    }
    for(int i=0; i<n; i++)
    {
        if(Min== a[i].first && Max== a[i].second)
            ans=i+1;
    }
    cout<<ans;
}
