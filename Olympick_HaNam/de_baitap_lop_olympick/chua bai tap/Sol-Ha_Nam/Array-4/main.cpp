#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,Odd=0,Even=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
            Even+=x;
        else
            Odd+=x;
    }
    cout<<Even<<" "<<Odd;
    return 0;
}
