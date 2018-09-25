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
    cout << "Hang can xoa:";
    cin >> line;
    delLine(line);
    cout << "Ma tran moi:\n";
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}

