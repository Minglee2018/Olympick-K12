#include <bits/stdc++.h>

using namespace std;
int f(int n,int z)
{
    if(z>=n || n<2)
    {
        cout<<n;
        return 0;
    }
    else
    {
        if(n%z==0)
           return cout<<z<<"*",f(n/z,z);
        else
        {
            return f(n,z+1);
        }
    }
}
int main()
{
    int n; cout<<"Nhap n = ";
    cin>>n;
    f(n,2);
    return 0;
}
