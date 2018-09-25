#include <bits/stdc++.h>
#define maxn 100000
using namespace std;
int a[maxn],b[maxn],c[maxn],n,m;
void SORT(int left,int right)
{
        int l=left,r=right,m=(l+r)/2;
        while(l<=r)
        {
            while(c[l]<c[m]) l++;
            while(c[m]<c[r]) r--;
            if(l<=r)
                swap (c[l],c[r]),l++,r--;
        }
        if(l<right) SORT(l,right);
        if(r>left) SORT(left,r);
}
void chen(int gt,int vitri,int &k)
{
    for(int i=k; i>vitri; i--)
        c[i]=c[i-1];
    c[vitri]=gt;
    k++;
}
int main()
{
    int i;
    cout<<"Nhap n = ";
    for(cin>>n,i=0; i<n; i++) cin>>a[i];
    cout<<"Nhap m = ";
    for(cin>>m,i=0; i<m; i++) cin>>b[i];
    int z=0;
    for(i=0; i<n; i++) c[z++]=a[i];
    for(i=0; i<m; i++) c[z++]=b[i];
    SORT(0,z-1);
    for(i=0; i<z; i++)
        cout<<c[i]<<" ";
    chen(-100,4,z);
    cout<<endl;
    for(i=0; i<z; i++)
        cout<<c[i]<<" ";
    return 0;
}
