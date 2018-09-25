#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cout<<"Nhap m va n "<<endl;
    cin>>m>>n;
    int a[m+1][n+1];
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    cout<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
