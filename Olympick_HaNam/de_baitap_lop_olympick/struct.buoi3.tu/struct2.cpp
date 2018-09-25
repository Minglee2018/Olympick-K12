#include <bits/stdc++.h>
using namespace std;
struct qlcb
{
    int ma,bacluong,tuoi;
    string hoten,gioitinh,chucvu,ngaysinh;
}A[100],k;
void chen(int k)
{
    cin>>A[k].ma;
    fflush(stdin);
    getline(cin,A[k].hoten);
    getline(cin,A[k].ngaysinh);
    cin>>A[k].tuoi;
    fflush(stdin);
    getline(cin,A[k].chucvu);
    getline(cin,A[k].gioitinh);
    cin>>A[k].bacluong;
    fflush(stdin);
}
int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"nguoi "<<i+1<<endl;
        cin>>A[i].ma;
        fflush(stdin);
        getline(cin,A[i].hoten);
        getline(cin,A[i].ngaysinh);
        cin>>A[i].tuoi;
        fflush(stdin);
        getline(cin,A[i].chucvu);
        getline(cin,A[i].gioitinh);
        cin>>A[i].bacluong;
        fflush(stdin);
    }
    for(i=0;i<n;i++)  //in ra nguoi ve huu
    {
        if(A[i].tuoi>55&&A[i].gioitinh=="nam")
            cout<<A[i].hoten<<endl;
        if(A[i].tuoi>50&&A[i].gioitinh=="nu")
            cout<<A[i].hoten<<endl;
    }
    int max=A[0].bacluong;  //in ra nguoi co luong cao nhat
    for(i=0;i<n;i++)
    {
        if(A[i].bacluong>max)
            max=A[i].bacluong;
    }
    for(i=n;i>=3;i--)   //chen can bo thu 3
        A[i]=A[i-1];
        chen(2);
    for(i=n+1;i>=1;i--) //chen can bo thu nhat
        A[i]=A[i-1];
    chen(0);
    for(i=1;i<n+1;i++)  //xoa can bo thu 2 va sap xep theo bac luong
    {
        A[i]=A[i+1];
        for(j=i+1;j<=n+1;j++)
            if(A[j].bacluong>A[i].bacluong)
            {
                k=A[i];
                A[i]=A[j];
                A[j]=k;
            }
    }
    return 0;
}
