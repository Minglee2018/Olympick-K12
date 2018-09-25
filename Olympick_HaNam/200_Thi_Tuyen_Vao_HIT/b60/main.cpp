#include <bits/stdc++.h>

using namespace std;
int a[1000][1000],n,m;
void Xoa_line(int vitri)
{
    for(int i=vitri; i<m-1; i++)
    {
        for(int j=0; j<n; j++)
        {

            a[i][j]=a[i+1][j];
        }
    }
    m--;
}
int main()
{
    int i;
    cout<<"Nhap so hang va so cot cua ma tran \n ";
    for(cin>>m>>n,i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    int vitri;
    cout<<"Nhap vi tri hang can xoa \n "; cin>>vitri;
    Xoa_line(vitri);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
