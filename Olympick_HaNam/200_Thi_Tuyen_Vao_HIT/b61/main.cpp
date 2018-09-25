#include <bits/stdc++.h>

using namespace std;
int a[1000][1000],n,m;

int main()
{
    int i;
    cout<<"Nhap so hang va so cot cua ma tran \n ";
    for(cin>>m>>n,i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<"In cac phan tu nam ngoai b
    ien \n ";
    for(cout<<setw(4),i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            int t=1;
            if(i==0 || i==m-1)
                cout<<a[i][j]<<" ",t=2;
            else
                cout<<setw(4);
            if(j==0 && t==1 || j==n-1 && t==1)
                cout<<a[i][j]<<setw(4);
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
