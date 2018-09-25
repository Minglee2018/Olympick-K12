#include <bits/stdc++.h>

using namespace std;
int a[10000][10000],n,m;
void Swap_line(int line1,int line2)
{
    cout<<n<<endl;
    for(int i=0; i<n; i++)
        swap(a[line1][i],a[line2][i]);
}

int main()
{
    freopen("input.txt","r",stdin);
    cout <<" nhap m va n ";
    cin>>m>>n;
    for(int i=0; i<m;i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    cout<<endl;
    Swap_line(1,2);
    cout<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
