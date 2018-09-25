#include <bits/stdc++.h>
using namespace std;
int a[1010101],n;
void Xoa(int vitri)
{

    for(int i=vitri; i<n-1; i++)
        a[i]=a[i+1];
    n--;
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
    Xoa(0);
    Xoa(n-1);
    int vitri;
    cout<<"Nhap vi tri x>0 va x<"<<n<<endl;
    cin>>vitri;
    Xoa(vitri);
    return 0;
}
