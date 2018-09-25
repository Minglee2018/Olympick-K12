#include <bits/stdc++.h>
#define maxn 1000000
using namespace std;
int a[maxn],b[maxn],n;
int main()
{
    int i; cout<<"Nhap n = ";
    for(cin>>n,i=0; i<n; i++) cin>>a[i];
    for(i=0; i<n; i++)
    {
        cout<<a[a[i]]<<" ";
    }
    cout<<endl;
    int z=0;
    for(i=0; i<n; i++)
    {
        b[z++]=a[i];
    }
    for(i=z-1; i>=0; i--)
        cout<<b[i]<<" ";
    return 0;
}
