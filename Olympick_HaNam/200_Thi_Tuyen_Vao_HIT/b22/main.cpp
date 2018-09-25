#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i; cout << " Nhap n = ";
    for(cin>>n,i=n-1; i>=0; i--){
        int z = sqrt(i);
        if(z*z == i) return cout<<i,0;
    }
    return 0;
}
