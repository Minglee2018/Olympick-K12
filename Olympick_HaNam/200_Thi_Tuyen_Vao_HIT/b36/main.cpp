#include <bits/stdc++.h
>

using namespace std;

int main()
{
    int n,even=0,odd=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        a[i]%2==0? even+=a[i]:odd+=a[i];
    }
    cout<<"Tong chan = "<<even<<endl;
    cout<<"Tong le = "<<odd;
    return 0;
}
