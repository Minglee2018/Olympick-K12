#include<bits/stdc++.h>

using namespace std;
int n,k,q,p,z=INT_MAX; long long ans;
int main()
{
    cin>>n>>k; q=k;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(x<0 && k>0) x=abs(x),k--;
            ans+=x;
        z=min(z,x);
    }
    if(k%2) ans=ans-2*z;

        cout<<ans;
    return 0;
}
