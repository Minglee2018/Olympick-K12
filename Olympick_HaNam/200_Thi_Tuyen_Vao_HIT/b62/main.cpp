#include <bits/stdc++.h>

using namespace std;
int a[1000][1000],n,m,Max=-10e9,Min=10e9;

int main()
{
    int i,dem_Max=0,dem_Min=0;
    cout<<"Nhap so hang va so cot cua ma tran \n ";
    for(cin>>m>>n,i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            Max=max(Max,a[i][j]);
            Min=min(Min,a[i][j]);
        }
    }
    for( i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]==Max) dem_Max++;
            if(a[i][j]==Min) dem_Min++;
        }
    }
    printf("Cuc dai cua ma tran la %d va so lan xuat hien la %d \n",Max,dem_Max);
    printf("Cuc tieu cua ma tran la %d va so lan xuat hien la %d \n ",Min,dem_Min);
    return 0;
}
