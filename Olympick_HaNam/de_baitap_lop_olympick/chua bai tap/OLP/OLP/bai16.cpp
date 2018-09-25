#include <bits/stdc++.h>

using namespace std;

int a[100][100];
int n,m,mi,ma;

int main()
{
    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];
    mi=a[1][1];
    ma=a[1][1];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
        {
            ma=max(ma,a[i][j]);
            mi=min(mi,a[i][j]);
        }
    cout << "max: " << ma << endl;
    cout << "min: " << mi;
    return 0;
}

