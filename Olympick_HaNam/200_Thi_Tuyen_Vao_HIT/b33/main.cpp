#include <bits/stdc++.h>

using namespace std;
int Gt(int n)
{
    if(n<2) return 1;
    else return n*Gt(n-1)
        ;
}
void Nhap(int &x,char k)
{
    printf("Nhap %c = ",k);
    cin>>x;
}
int main()
{
    int n;
    Nhap(n,'n');
    cout<<Gt(n);
    return 0;
}
