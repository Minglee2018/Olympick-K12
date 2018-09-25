#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Odd=0,Even=0,n;
    cin>>n;
    for(int i=1;i<=n;i++)
        if(i%2==1)
            Odd+=i;
        else
            Even+=i;
    cout<<Odd<<" "<<Even;
    return 0;
}
