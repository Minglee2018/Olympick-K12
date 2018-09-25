#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[100][100];
    int n,m,countt,num;
    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];

    countt=0;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            if (a[i][j]>0)
            {
                num=a[i][j];
                while (num>0)
                {
                    num=num/10;
                    countt++;
                }
            }
    cout << countt;
    return 0;
}

