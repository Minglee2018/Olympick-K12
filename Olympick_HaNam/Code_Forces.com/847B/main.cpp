#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <ll> d[2000001];
ll m[2000000];
int main()
{
    ll n,p; cin>>n;
    for(int i=0; i<n; i++)
    {
        ll t; cin>>t;
        p=upper_bound(m,m+n,t,std::greater<ll>())-m;
        d[p].push_back(t);
        m[p]=t,cout<<p<<" ";
    }
    ll i=0;
    while(!d[i].empty())
    {
        for( vector<ll> :: iterator it=d[i].begin(); it!=d[i].end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
        i++;
    }
    return 0;
}
