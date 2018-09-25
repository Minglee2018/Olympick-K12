#include <bits/stdc++.h>
#define maxn 10000
using namespace std;
int a[maxn][maxn],b[maxn][maxn];

int main()
{
    cout <<" nhap so hang va so cot cua 2 ma tran ";
    int m,n;
    cin>>m>>n;
    cout<<"Nhap Ma Tran A"<<endl;
    for(int i=0; i<m;i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];

    cout<<" \n Nhap Ma Tran B \n";
    for(int i=0; i<m;i++)
        for(int j=0; j<n; j++){
            int k; cin>>k;
            b[i][j]=k+a[i][j];
        }

    cout<<" \n Xuat Tong 2 Ma Tran \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cout<<b
            [i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
