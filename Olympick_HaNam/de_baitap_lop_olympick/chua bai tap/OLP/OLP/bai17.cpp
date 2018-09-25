#include <bits/stdc++.h>

using namespace std;

int a[100][100];
int n,m,intCount,temp;
//bool kt[100];
int main()
{
    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];

    intCount=0;
    /*
    int ma=a[1][1];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
        {
            kt[a[i][j]]=true;
            ma=max(ma,a[i][j]);
        }
    for (int i=1;i<=ma;i++)
        if (kt[i]==true) intCount++;
    */

    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
        {
            temp=0;
            for (int ii=1;ii<=n;ii++)
                for (int jj=1;jj<=m;jj++)
                    if (a[i][j]==a[ii][jj]) temp++;
            if (temp==1) intCount++;
        }
    cout << intCount;
    return 0;
}

