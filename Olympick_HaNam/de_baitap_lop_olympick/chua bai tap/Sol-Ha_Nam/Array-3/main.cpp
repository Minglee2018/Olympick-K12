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
    int n,x,Res=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(CheckPrime(x))
            Res+=x;
    }
    cout<<Res;
}
