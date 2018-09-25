#include <bits/stdc++.h>

using namespace std;
int a[10000][10000],n,m;
void Xapxep(int x)
{
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m;j++)
        {
            if(a[i][x]>a[j][x])
                swap(a[i][x],a[j][x]);
        }
    }
}
int main()
{

    cout <<" nhap m va n ";
    cin>>m>>n;
    for(int i=0; i<m;i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    for(int i=0; i<n; i++)
    {
        Xapxep(i);
    }
    cout<<endl;
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
