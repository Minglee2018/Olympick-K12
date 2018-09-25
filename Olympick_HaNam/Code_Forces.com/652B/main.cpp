#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
        cin>>n;
        long long a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int j=0,k=n-1;
    for(int i=0; i<n; i++)
    {
        if(i%2!=0)
            cout<<a[k--]<<' ';
            else
                cout<<a[j++]<<' ';
    }
    return 0;
}
