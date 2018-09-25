#include <bits/stdc++.h>
#define maxn 100001
using namespace std;
int main()
{
    int n,k,a[maxn];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=2;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=1;i<=n-1;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Nhap vi tri muon xoa ";
    cin>>k;
    for(int i=k;i<=n-1;i++)
        a[i]=a[i+1];
    for(int i=1;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
