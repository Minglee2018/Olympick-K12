#include <bits/stdc++.h>
#define maxn 10000
using namespace std;
bool Check(int z)
{
    int a[6]={6,28,496,8128,33550336};
    for(int i=0; i<5; i++)
    {
        if(z==a[i])
            return true;
    }
    return false;
}

int main()
{
    int m,n,sum=0;
    cout<<"Nhap so hang va so cot cua ma tran \n"; cin>>m>>n;
    int a[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
            if(Check(a[i][j]))sum+=a[i][j];
        }
    }
    cout<<sum;
    return 0;
}
