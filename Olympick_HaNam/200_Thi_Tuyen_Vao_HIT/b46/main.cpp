#include <bits/stdc++.h>
#define maxn 100000
using namespace std;
int a[maxn],b
[maxn],n,x,dem,sum,j;
void Qsort(int left,int right)
 {
     int l=left,r=right,m=(l+r)/2;
     while(l<=r)
     {
         while(a[l]<a[m]) l++;
         while(a[r]>a[m]) r--;
         if(l<=r)
            swap(a[l],a[r]),l++,r--;
     }
     if(l<right)    Qsort(l,right);
     if(r>left)     Qsort(left,r);
 }
int main()
{
    cout<<"Nhap n = "; cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    cout<<"Nhap x = "; cin>>x;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==x ){
            dem++;
            sum+=x;
            b[j++]=i;
        }
    }
    Qsort(1,n);
    printf("%d xuat hien %d lan \n",x,dem);
    printf("vi tri cua %d la: \n",x);
    for(int i=0; i<j; i++)
        cout<<b[i]<<" ";
    printf("\n Tong cac phan tu x la: %d \n",sum);
    Qsort(1,n);
    int index=0;
    for(int i=1; i<=n; i++){
        if(a[i]==x)
        {
            index=i;
            break;
        }
    }
    printf("%d la so nho thu %d trong mang",x,index);
    return 0;
}
