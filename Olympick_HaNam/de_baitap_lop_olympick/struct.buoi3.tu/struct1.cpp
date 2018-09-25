#include <bits/stdc++.h>
using namespace std;
struct thisinh
{
    string hokhau,hoten,ngaysinh;
    int sbd,tuoi,gt;
    int toan,li,hoa,tongdiem;

};
int main()
{
    system("color b");
    int i=1,j,k,z,x=0;
    thisinh A[100],l;
    do
    {
        cout<<"thi sinh "<<i<<endl;
        cout<<"sbd ";
        cin>>A[i].sbd;
        fflush(stdin);
        cout<<"ten ";
        getline(cin,A[i].hoten);
        if(A[i].hoten=="")
            break;
        cout<<"ngay sinh ";
        getline(cin,A[i].ngaysinh);
        cout<<"gioi tinh (1_nam/ 0_nu) ";
        cin>>A[i].gt;
        fflush(stdin);
        cout<<"hokhau ";
        getline(cin,A[i].hokhau);
        cout<<"tuoi ";
        cin>>A[i].tuoi;
        cout<<"diem Toan, diem Li, diem Hoa ";
        cin>>A[i].toan>>A[i].li>>A[i].hoa;
        A[i].tongdiem=A[i].toan+A[i].li+A[i].hoa;
        i++;
    }
    while(1);
    for(j=1;j<i;j++)
    {
        cout<<A[j].sbd<<"\t";
        cout<<A[j].hoten<<"\t";
        cout<<A[j].ngaysinh;
        cout<<"\t"<<A[j].gt<<"\t\t";
        cout<<A[j].hokhau;
        cout<<"\t"<<A[j].toan<<"\t"<<A[j].li;
        cout<<"\t"<<A[j].hoa<<"\t"<<A[j].tongdiem<<endl;
    }
    cout<<"thi sinh nu co tong diem >25 "<<endl;
    for(j=1;j<i;j++)
    {
        if(A[j].gt==0&&A[j].tongdiem>25)
        cout<<A[j].hoten;
        cout<<endl;
    }
    cout<<"diem chuan tuyen sinh la: (>=0&<=30) ";
    cin>>z;
    if(z<0||z>30)
    {
        cout<<"diem chuan k hop le";
        return 0;
    }
    cout<<"thi sinh o Ha Noi trung tuyen: "<<endl;
    for(j=1;j<i;j++)
    {
        if(A[j].tongdiem>=z )
        {
            if(A[j].hokhau=="ha noi")
            {
                cout<<A[j].hoten;
                cout<<endl;
            }
            x++;
        }
    }
    cout<<"co tong cong "<<x<<" thi sinh trung tuyen"<<endl;
    for(j=1;j<i-1;j++) //sap xep theo tong diem
        for(k=2;k<i;k++)
        {
            if(A[j].tongdiem>A[k].tongdiem)
            {
                l=A[j];
                A[j]=A[k];
                A[k]=l;
            }
        }
    return 0;
}
