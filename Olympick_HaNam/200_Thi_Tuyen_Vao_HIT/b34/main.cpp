#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    do
    {
        cout<<"Nhap 0<n<50 "<<endl;
        cin>>n;
    }
    while(n<=0||n>=50);
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        cout<< "a["<<i<<"] = ";
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}
