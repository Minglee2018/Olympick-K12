#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,dem=0;
    cout <<" nhap m va n ";
    cin>>m>>n;
    int a[m+1][n+1];
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            if(a[i][j]>0) dem++;
            if(j==n-1){
                a[i][n]=dem,dem=0;
            }
        }
    }
    dem=0;
    for(int i=0; i<m;i++){
        dem+=a[i][n];
    }
    cout<<dem<<endl;
    return 0;
}
