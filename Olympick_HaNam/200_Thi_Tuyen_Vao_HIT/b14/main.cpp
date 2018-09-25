#include <iostream>

using namespace std;

int main()
{
    int n,i; cout<<"Nhap n = ";
    for(cin>>n,i=1; i<=n; i++)
        if(n%i==0) cout<<i<<" ";
    return 0;
}
