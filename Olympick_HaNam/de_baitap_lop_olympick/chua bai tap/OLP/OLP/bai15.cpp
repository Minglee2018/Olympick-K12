#include <bits/stdc++.h>

using namespace std;

int a[100][100];
int n,m,line;

void delLine(int line)
{
    for (int i=line;i<=n-1;i++)
        for (int j=1;j<=m;j++) a[i][j]=a[i+1][j];
    n--;
}

int main()
{
    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];
    for (int j=1;j<=m;j++) cout << a[1][j] << " ";
    for (int i=2;i<=n;i++) cout << a[i][m] << " ";
    for (int j=m-1;j>=1;j--) cout << a[n][j] << " ";
    for (int i=n-1;i>=2;i--) cout << a[i][1] << " ";
    return 0;
}

