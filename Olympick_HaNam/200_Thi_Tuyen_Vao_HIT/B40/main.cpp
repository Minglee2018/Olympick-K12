#include <bits/stdc++.h>
using namespace std;
int a[1010101],n;
void Chen(int value,int vitri)
{
    for(int i=n; i>vitri; i--)
        a[i]=a[i-1];
    a[vitri]=value;
    n++;
}
void output()
{
    cout<<endl;
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}
int main()
{
    int i=0;
    for(cin>>n,i=0;i<n; i++) cin>>a[i];
    cout<<"Nhap gia tri can chen "<<endl;
    int value; cin>>value;
    Chen(value,0);
    Chen(value,n);
    int vitri;
    cout<<"Nhap vi tri x>0 va x<"<<n<<endl;
    cin>>vitri;
    Chen(value,vitri);
    output();
    return 0;
}
