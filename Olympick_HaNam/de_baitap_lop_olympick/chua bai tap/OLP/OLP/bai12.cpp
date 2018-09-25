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

    for (int i=1;i<=n;i++)
    {
        s=0;
        for (int j=1;j<=m;j++)
            s+=a[i][j];
        cout << s << endl;
    }

    return 0;
}

