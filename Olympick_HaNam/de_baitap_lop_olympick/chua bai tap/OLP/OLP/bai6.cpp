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

    for (int j=1;j<=m;j++)
    {
        for (int i=1;i<=n-1;i++)
            for (int k=i+1;k<=n;k++)
                if (a[i][j]>a[k][j])
                {
                    temp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=temp;
                }
    }
    cout << "Mang moi la:\n";
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}

