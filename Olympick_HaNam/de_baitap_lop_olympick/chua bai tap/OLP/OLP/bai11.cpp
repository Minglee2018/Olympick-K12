#include <bits/stdc++.h>

using namespace std;

int a[100][100];
int n,m;
float p;


int main()
{
    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];
    p=1;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            p=p*a[i][j];

    cout << pow(p,(float)1/(m*n));
    return 0;
}

