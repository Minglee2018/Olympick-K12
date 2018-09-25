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
    if(CheckPrime(n));
    int i=2;
    cout<<1;
    while(n!=1)
    {
        while(n%i==0)
        {
            cout<<"*"<<i;;
            n/=i;
        }
        i++;
    }
    return 0;
}
