#include <bits/stdc++.h>

using namespace std;

int a[100][100];
int n,m,s,sum,num;


int main()
{
    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];
    sum=0;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
        {
            num=a[i][j];
            s=0;
            for (int k=1;k<=sqrt(num);k++)
                if (num%k==0)
                    if (k!=num/k) s+=k+num/k;
                    else s+=k;
            if (s==num*2)
            {
                cout << num << endl;
                sum+=num;
            }
        }
    cout << sum;
    return 0;
}

