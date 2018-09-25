#include <bits/stdc++.h>

using namespace std;
int n,m,a[1001],b[1001],result;
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(abs(a[i]-b[j])<=1)
                {
                    b[j]=10000;
                    result++;
                    break;

                }
        }
    }
    cout<<result;
    return 0;
}
