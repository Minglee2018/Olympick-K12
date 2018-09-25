#include <iostream>

using namespace std;

int main()
{
    int n,i; cout<<"Nhap n= ";
    for(cin>>n,i=3; i<=n; i++){
        bool k=true;
        for(int j=2; j<i; j++){
            if(i%j==0) k=false;
        }
        if(k) cout<<i<<" ";
    }
    return 0;
}
