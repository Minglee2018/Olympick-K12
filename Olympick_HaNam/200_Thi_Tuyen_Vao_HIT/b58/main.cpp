#include <bits/stdc++.h>

using namespace std;
int a[1000][1000],n,m,sum,dem;
int main()
{
    cout<<"Nhap so hang va so cot cua ma tran \n "; cin>>m>>n;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            a[i][n]+=a[i][j];
        }
    cout<<"Tong cac so tren tung hang cua ma tran \n";
    for(int i=0; i<m; i++)
    cout<<a[i][n]<<endl;
    return 0;
}
