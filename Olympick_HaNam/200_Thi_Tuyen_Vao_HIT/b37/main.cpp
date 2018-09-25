#include <bits/stdc++.h>

using namespace std;
bool T(int x)
{
    if(x<3) return false;
    for(int i=2; i<x; i++)
        if(x%i==0) return false;
    return true;
}
int main()
{
    int n,sum=0; cin>>n;
    int a[n];
    for(int i=0;i<n; i++)
    {
        cin>>a[i];
        if(T(a[i])) sum+=a[i];
    }
    cout<<sum;
    return 0;
}
