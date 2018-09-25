#include <iostream>

using namespace std;

int main()
{
    int n; cout<<"nhap mot so nguyen n"<<endl; cin>>n;
    int z=n-1;
    while(n%z!=0)
    {
        z--;
    }
    cout<<"Uoc gan nhat cua n ="<<z<<endl<<"Boi gan nhat = "<<n*2;
    return 0;
}
