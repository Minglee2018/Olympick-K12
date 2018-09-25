#include <bits/stdc++.h>

using namespace std;

int a[100][100],b[100][100];
int n,m;


int main()
{
    cin >> n >> m;
    cout << "Ma tran 1:\n";
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];
    cout << "Ma tran 2:\n";
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> b[i][j];
    cout << "Ma tran tong:\n";
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
            cout << a[i][j]+b[i][j] << " ";
        cout << endl;
    }
    return 0;
}

