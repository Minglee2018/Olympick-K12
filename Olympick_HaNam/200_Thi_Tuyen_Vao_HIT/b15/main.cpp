#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; float d=1;
    cout<<"Nhap n = ";
    cin>>n;
    if( n%2!=0){
        if(n-1 <=0) return cout<<0,0;
        else
            cout<<"F(n) = "<<(float)sqrt(n-1);
    }
    else
    {
        for(int i=2; i<=n; i++) d+=1.0/i;
        cout<<"F(n) = "<<d;
    }
    return 0;
}
