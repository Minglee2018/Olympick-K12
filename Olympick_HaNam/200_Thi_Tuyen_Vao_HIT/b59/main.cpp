#include <bits/stdc++.h>

using namespace std;
int a[1000][1000],n,m,sum,dem;
bool check (int x)
{
    if(x<3
       ) return false;
    int z= sqrt(x);
    if(z*z==x) return true;
    else return false;
}
int main()
{
    int i;
    cout<<"Nhap so hang va so cot cua ma tran \n ";
    for(cin>>m>>n,i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            if(check(a[i][j])) sum+=a[i][j];
        }
    }
    cout<<" \n Tong cac so chinh phuong cua ma tran \n"<<sum;
    return 0;
}
