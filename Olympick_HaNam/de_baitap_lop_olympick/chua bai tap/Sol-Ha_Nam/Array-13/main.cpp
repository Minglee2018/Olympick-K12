#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,x1,count1=0,min_1=1;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        cin>>x1;
        if(x1==x)
            count1++;
        if(x1<x)
            min_1++;
    }
    cout<<"So phan tu bang "<<x<<": "<<count1<<endl;
    cout<<"Tong cac phan tu bang "<<x<<": "<<count1*x<<endl;
    cout<<x<<" la chu so nho thu :"<<min_1;
    return 0;
}
