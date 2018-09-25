#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n = ";
    cin>>n;
    int a[n+1];
    a[0]=0;
    for(int i=1; i<=n; i++)
    {
        if(i<3)
        {
            a[i] = 1;
        }
        else
        {
            a[i]=a[i-1]+a[i-2];
        }
    }
    for(int i=0; i<=n; i++)
        cout<<a[i]<<" ";
      return 0;
}
