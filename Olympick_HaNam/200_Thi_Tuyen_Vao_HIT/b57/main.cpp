#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cout<<"Nhap so hang va so cot cua ma tran \n "; cin>>m>>n;
    int a[m][n],sum=0,dem=0;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            if(a[i][j]>0) sum+=a[i][j],dem++;
        }
    if(dem==0)
        cout<<"Khong ton tai so nguyen duong trong ma tran \n";
    else
        cout<<"Tong TB nhan cac so nguyen duong trong ma tran la "<<(float)sum/dem
}
