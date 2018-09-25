#include <bits/stdc++.h>
#define maxn 10001
using namespace std;
int main()
{
    int n,a[maxn],b[maxn],Ca=0,Cb=0,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
            a[++Ca]=x;
        else
            b[++Cb]=x;
    }
    for(int i=1;i<=Ca;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=1;i<=Cb;i++)
        cout<<b[i]<<" ";
    return 0;
}
