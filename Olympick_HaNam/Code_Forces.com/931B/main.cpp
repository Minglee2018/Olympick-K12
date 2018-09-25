#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,ans;
    cin>>n>>a>>b;
    a--,b--;ans=0;
    while(a!=b)
    {
        a/=2,b/=2,ans++;
    }
    if(n==(1<<ans))
    {
        cout<<"Final!";
    }else
    {
        cout<<ans;
    }
    return 0;
}
