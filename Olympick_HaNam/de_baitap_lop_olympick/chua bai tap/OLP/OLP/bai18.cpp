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
    cout << "Max cua hang: ";
    for (int i=1;i<=n;i++)
    {
        ma=a[i][1];
        for (int j=2;j<=m;j++) ma=max(ma,a[i][j]);
        cout << ma << endl;
    }
    cout << "Min cua cot: ";
    for (int j=1;j<=m;j++)
    {
        mi=a[1][j];
        for (int i=1;i<=n;i++)
            mi=min(mi,a[i][j]);
        cout << mi << endl;
    }
    return 0;
}

