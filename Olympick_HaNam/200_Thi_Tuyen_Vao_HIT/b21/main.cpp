#include <iostream>

using namespace std;

int main()
{
    int n,m
    ; cout<<"Nhap m va n: "<<endl;
    cin>>m>>n;
    for(int i=max(m,3); i<=n; i++)
    {
        bool k=true;
        for(int j=2; j<i; j++)
            if(i%j==0) k=false;
        if(k) cout<<i<<" ";
    }
    return 0;
}
