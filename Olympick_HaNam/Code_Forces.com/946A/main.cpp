#include <bits/stdc++.h>
#define maxn 1000
using namespace std;
int a[maxn],n,ans;
int main()
{
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>a[i],ans+=abs(a[i]);
    }
    cout<<ans;
    return 0;
}
