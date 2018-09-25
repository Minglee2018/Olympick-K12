#include <bits/stdc++.h>
int a[100][100];
using namespace std;
void xoanoc(int m,int n)
{
    int i,k=1,x=1,y=1,z=m*n;
    while(k<=z)
    {
        if(x==n)
        {
            for(i=y;i<=m;i++)
                a[i][x]=k++;
        }
        else if(y==m)
        {
            for(i=x;i<=n;i++)
                a[y][i]=k++;
            break;
        }
        else
        {
            for(i=x;i<=n;i++)
                a[y][i]=k++;
            for(i=y+1;i<=m;i++)
                a[i][n]=k++;
            for(i=n-1;i>=x;i--)
                a[m][i]=k++;
            for(i=m-1;i>y;i--)
                a[i][x]=k++;
        }
        x++;n--;y++;m--;
    }
}
int main()
{
    int i,j,m,n;
    system("color c");
    cin>>m>>n;
    xoanoc(m,n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<"\t";
        cout<<endl;
    }
    return 0;
}
