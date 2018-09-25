#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,x1,x2;
    cout<<"nhap a,b,c: "; cin>>a;cin>>b;cin>>c;
    if(a==0) cout<<"ko phai pt bac 2"<<endl;
    else
    {
        float d = b*b-4*a*c;
        if(d<0) cout<<"PT vo no"<<endl;
        else
        {
            cout<<"x1 = "<<(float)(-b-sqrt(d))/(2*a)<<endl<<"x2 = "<<(float)(-b+sqrt(d))/(2*a);
        }
    }
    return 0;
}
