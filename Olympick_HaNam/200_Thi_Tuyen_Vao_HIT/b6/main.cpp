#include <bits/stdc++.h>
using namespace std;
float F(float x)
{
    int y;
    y=x*100,y=y%10;
    if(y>5)
    {
        y=x*100,y=y/10;
        x = (y+1)/10.0;
    }
    return x;
}
int main()
{
    float value; cout<<"Nhap diem"<<endl; cin>>value;
    value=F(value);
    cout<<value;
    cout<<endl;
    if(value>=8.5) cout<<"A";
    else if(value>=7) cout<<"B";
    else if(value>=5.5) cout<<"C";
    else if(value>4) cout<<"D";
    else
        cout<<"F";
    return 0;
}
