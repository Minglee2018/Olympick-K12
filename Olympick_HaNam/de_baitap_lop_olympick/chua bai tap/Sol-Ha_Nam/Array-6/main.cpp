#include <bits/stdc++.h>
#define maxn 10001
using namespace std;
int a[maxn],n;
void IncSort()
{
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(a[i]>a[j])
            {
                int tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    IncSort();
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=n;i>=1;i--)
        cout<<a[i]<<" ";
    return 0;
}
