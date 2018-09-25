#include <bits/stdc++.h>
#define maxn 100001
using namespace std;
int a[maxn],b[maxn],c[2*maxn],n,m;
void IncSort()
{
    for(int i=1;i<=m+n-1;i++)
        for(int j=i+1;j<=m+n;j++)
            if(c[i]>c[j])
            {
                int tg=c[i];
                c[i]=c[j];
                c[j]=tg;
            }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        c[i]=a[i];
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>b[i];
        c[n+i]=b[i];
    }
    IncSort();
    for(int i=1;i<=n;i++)
        a[i]=c[i];
    for(int i=n+1;i<=n+m;i++)
        b[i-n]=c[i];
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=1;i<=m;i++)
        cout<<b[i]<<" ";
    cout<<endl<<"Nhap gia tri va vi tri chen ";
    int x,k;
    cin>>x>>k;
    for(int i=n+1;i>=k+1;i--)
        a[i]=a[i-1];
    a[k]=x;
    for(int i=m+1;i>=k+1;i--)
        b[i]=b[i-1];
    b[k]=x;
    n++;
    m++;
     for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=1;i<=m;i++)
        cout<<b[i]<<" ";
    return 0;
}
