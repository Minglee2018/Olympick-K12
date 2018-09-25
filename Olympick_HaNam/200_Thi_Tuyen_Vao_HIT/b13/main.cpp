#include <iostream>

using namespace std;

int main()
{
    int n; float d=1;
    cout<<"Nhap n = "; cin>>n;
    if(n==0) return cout<<0,0;
    else
    {
        for(int i=2; i<=n; i++)
            d+=1.0/i;
        cout<<"Tong = "<<d;
    }
    return 0;
}
