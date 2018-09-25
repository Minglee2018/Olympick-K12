#include <bits/stdc++.h>
using namespace std;
int a[10000][10000],n,m;
bool NT(int x)
{
    if(x<3) return false;
    for(int i=2; i<x; i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int main()
{

    cout <<" nhap m va n ";
    cin>>m>>n;
    for(int i=0; i<m;i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    cout<<"Cac so Nguyen to co trong mang la: "<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(NT(a[i][j]))
                cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
