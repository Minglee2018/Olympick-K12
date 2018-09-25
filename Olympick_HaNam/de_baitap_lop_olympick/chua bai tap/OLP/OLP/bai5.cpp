#include <bits/stdc++.h>

using namespace std;

int a[100][100];
int n,m,number;

int countt(int num)
{
    int intCount=0;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            if (a[i][j]==num) intCount++;
    return intCount;
}


int main()
{

    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];
    cout << "So can dem: ";
    cin >> number;
    cout << countt(number);
    return 0;
}

