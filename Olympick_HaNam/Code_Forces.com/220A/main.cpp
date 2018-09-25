#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000005];
void chemthan()
{
    int n,ans=0; cin>>n;
    for(int i=1; i<=n; i++)
    cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        int t=i;
        for(int j=i; j<=n; j++)
        if(a[t]>a[j])
        t=j;
        if(t!=i)
        ans++;
        swap(a[i],a[t]);
     }
     for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
       if(ans>1) cout<<"NO";
       else cout<<"YES";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    chemthan();
    return 0;
}
