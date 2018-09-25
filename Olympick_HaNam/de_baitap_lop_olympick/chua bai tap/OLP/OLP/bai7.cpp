#include <bits/stdc++.h>

using namespace std;

int a[100][100];
int n,m,temp;
bool kt;


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
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
        {
            kt=true;
            if (a[i][j]<2) kt=false;
            else
                for (int k=2;k<=sqrt(a[i][j]);k++)
                    if (a[i][j]%k==0)
                    {
                        kt=false;
                        break;
                    }
            if (kt==true) cout << a[i][j] << " ";
        }
    return 0;
}

