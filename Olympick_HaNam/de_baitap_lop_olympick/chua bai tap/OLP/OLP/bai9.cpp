#include <bits/stdc++.h>

using namespace std;

int a[100][100];
int n,m,s;


int main()
{
    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];
    s=0;
    for (int i=1;i<=n;i++)
    {
        s+=a[i][1]+a[i][m];
    }
    for (int j=2;j<=m-1;j++)
    {
        s+=a[1][j]+a[n][j];
    }
    cout << s;
    return 0;
}

