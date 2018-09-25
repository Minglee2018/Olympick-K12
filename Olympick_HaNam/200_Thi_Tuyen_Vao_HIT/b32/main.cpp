#include <bits/stdc++.h>
using namespace std;

void Input(int &x,char k)
{
    printf("Nhap %c = \n",k);
    cin>>x;
}
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    Input(a,'a');
    Input(b,'b');
    cout<<sum(a,b);
    return 0;
}
