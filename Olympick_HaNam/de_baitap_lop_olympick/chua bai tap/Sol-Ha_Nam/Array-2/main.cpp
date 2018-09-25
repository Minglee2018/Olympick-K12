#include <bits/stdc++.h>
#define maxn 100001
using namespace std;
int main()
{
    int n,a[maxn],Sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        Sum+=a[i];
    }
    cout<<Sum<<endl;
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
