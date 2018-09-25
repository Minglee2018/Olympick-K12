#include <bits/stdc++.h>
using namespace std;
bool CheckPrime(int x)
{
    for(int i=2;i<x;i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i=n-1;i>=2;i--)
        if(CheckPrime(i))
        {
            cout<<i;
            break;
        }
    return 0;
}
