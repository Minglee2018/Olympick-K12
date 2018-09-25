#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,Sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(n%x==0)
        {
            Sum+=x;
            cout<<x<<" ";
        }
    }
    cout<<endl<<Sum;
}
