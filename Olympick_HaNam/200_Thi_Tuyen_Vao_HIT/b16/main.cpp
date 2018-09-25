#include <iostream>

using namespace std;

int main()
{
    int n,even=0,odd=0,i;
    cout<<"Nhap n = ";
    for(cin>>n,i=1; i<=n; i++) i%2==0?even+=i:odd+=i;
    cout<<"even = "<<even<<endl<<"odd = "<<odd;
    return 0;
}
