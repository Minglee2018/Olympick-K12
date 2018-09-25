//chuan hoa 1 chuoi
#include<bits/stdc++.h>
using namespace std;
void Chuan_Hoa_Chuoi(char a[])
{
   int i;
   for(i=0;i<strlen(a);i++)
    if(a[i]>=65&&a[i]<=90)  //kiem tra co phai la ky tu hoa
        a[i]=a[i]+32;        //chuyen tat ca ve ky tu thuong
   for(i=0;i<strlen(a);i++)
    if(a[i]==' '&&a[i+1]==' ')  //loai bo khoang trang
        strcpy(&a[i],&a[i+1]);
   for(i=0;i<strlen(a);i++)
    if(a[i]==' ')
        a[i+1]=toupper(a[i+1]);  //chuyen chu cai sau khoang trang thanh chu hoa
         a[0]=a[0]-32;           //chuyen ky tu dau thanh chu hoa.
   for(i=0;i<strlen(a);i++)
    if((a[i]<65&&a[i]!=32)||a[i]>122||(a[i]>90&&a[i]<97)) //soa ky tu khong phai la chu cai trong chuoi.
        strcpy(&a[i],&a[i+1]);
}
int main()
{
    char a[100];
   cin>>a;
   Chuan_Hoa_Chuoi(a);
   cout<<a;
   return 0;
}
