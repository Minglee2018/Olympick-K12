#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <ll> a;
ll n,x,ans=-1;
int main()
{
    cin>>n;
    for(int i=0 ;i<n; i++)
        {
          ll x; cin>>x;
          a.push_back(x);
        }
    cin>>x;
        for(int i=0; i<x; i++)
        {
            ans=-1;
            ll k; cin>>k;
            ans=lower_bound(a.begin(),a.end(),k) - a.begin();
            if(a[ans]!=k)
                cout<<"NO"<<" "<<ans+1;
            else
                cout<<"YES"<<" "<<ans+1;
            cout<<endl;

        }
    return 0;
}
