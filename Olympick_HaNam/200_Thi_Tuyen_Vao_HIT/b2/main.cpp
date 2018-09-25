#include <iostream>

using namespace std;

int main()
{
    int a,b; cout<<" nhap a va b "; cin>>a>>b;
    if(a<b && b%a==0) cout<<a<<" la uoc cua "<<b;
    else
        cout<<a<<" khong phai la uoc cua "<<b;
    return 0;
}
