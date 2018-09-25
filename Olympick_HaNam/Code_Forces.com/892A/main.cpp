#include <bits/stdc++.h>

using namespace std;
bool compare (int a,int b)
{
    if(a>b)
        return true;
    else
        return false;
}

int main()
{
    int n; cin>>n;
    long long b[n]; unsigned long long sum=0;
    for(int i=0; i<n; i++)
    {
        long long x; cin>>x;
        sum+=x;
    }
    for(int j=0; j<n; j++)
        cin>>b[j];
    sort(b,b+n,compare);
    if(sum > b[0]+b[1])
        cout<<"NO";
     else
        cout<<"YES";
    return 0;
}
