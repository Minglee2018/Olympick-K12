#include <bits/stdc++.h>
#define maxn 100000
using namespace std;
int a[maxn],even[maxn],odd[maxn],n,i,x,y;
int main()
{
    for(cin>>n,i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)

            even[x++]=a[i];
        else
            odd[y++]=a[i];
    }
    for(i=0; i<x; i++)
        cout<<even[i]<<" ";
    cout<<endl;
    for(i=0; i<y; i++)
        cout<<odd[i]<<" ";
    cout<<endl;
    return 0;
}
