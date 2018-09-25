#include <bits/stdc++.h>

using namespace std;

int a[100][100];
int n,m,s;

bool check(int num)
{
    int temp=sqrt(num);
    if (temp*temp==num) return true;
    return false;
}

int main()
{
    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];
    s=0;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
            if (check(a[i][j])==true) s+=a[i][j];
    }
    cout << s;
    return 0;
}

