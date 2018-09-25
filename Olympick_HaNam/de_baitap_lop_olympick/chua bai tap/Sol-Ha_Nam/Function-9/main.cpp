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
    int n,Res=0;
    cin>>n;
    for(int i=2;i<=n;i++)
        if(CheckPrime(i))
            Res+=i;
    cout<<Res;
    return 0;
}
