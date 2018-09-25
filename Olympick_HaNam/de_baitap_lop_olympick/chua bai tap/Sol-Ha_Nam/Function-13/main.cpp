#include <bits/stdc++.h>
using namespace std;
bool CheckPrime(int x)
{
    if(x==1)
        return false;
    for(int i=2;i<x;i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=n;i<=m;i++)
        if(CheckPrime(i))
            cout<<i<<" ";
    return 0;
}
