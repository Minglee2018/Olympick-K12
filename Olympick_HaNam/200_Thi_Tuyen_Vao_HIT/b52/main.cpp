#include <bits/stdc++.h>

using namespace std;
int a[10000][10000],n,m;

int main()
{
    cout <<" nhap m va n ";
    cin>>m>>n;
    for(int i=0; i<m;i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    int x,dem=0;
    cout<<"Nhap so can tim x = ";cin>>x;
    for(int i=0; i<m;i++)
    {
        for(int j=0; j<n; j++)
        {
             if(a[i][j]==x) dem++;
        }
    }
    printf ("\n %d xuat hien %d trong mang \n
             ",x,dem);
    return 0;
}
