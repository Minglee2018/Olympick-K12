#include <iostream>
using namespace std;
int n,a[1010101],i,z;
int main()
{
    cout<<"Nhap n = "<<endl;
    for(cin>>n,i=0;i<n;i++)
    {
            cin>>a[i];
            z+=a[i];
    }
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Tong = "<<z;
    return 0;
}
