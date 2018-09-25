#include <bits/stdc++.h>

using namespace std;

int a[100][100];
int n,m,temp;

int main()
{
    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=i-1;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++) cout << a[i][j] << " " ;
        cout << endl;
    }
    return 0;
}

