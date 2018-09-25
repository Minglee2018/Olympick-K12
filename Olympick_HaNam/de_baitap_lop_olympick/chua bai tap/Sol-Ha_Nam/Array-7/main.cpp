#include <bits/stdc++.h>
#define maxn 100001
using namespace std;
int main()
{
    int n,x,k,a[maxn];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cout<<"Nhap gia tri chen ";
    cin>>x;
    a[0]=x;
    a[n+1]=x;
    for(int i=0;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=1;i<=n+1;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Nhap vi tri can chen ";
    cin>>k;
    for(int i=n+1;i>=k+1;i--)
        a[i]=a[i-1];
    a[k]=x;
    for(int i=1;i<=n+1;i++)
        cout<<a[i]<<" ";
    return 0;
}
