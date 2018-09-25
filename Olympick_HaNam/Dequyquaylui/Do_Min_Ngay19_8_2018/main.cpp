#include <bits/stdc++.h>
#define Max_N 100
using namespace std;
const int dong[8]= {0,-1,-1,-1,0,1,1,1};
const int cot[8]= {1,1,0,-1,-1,-1,0,1};
int d,c;
int bd_md[Max_N][Max_N];//b?n d? m?t d?
int bd_min[Max_N][Max_N];//b?n d? mìn

void sinh_dl()//sinh ra b?n d? mìn (d? t?o ra b?n d? m?t d? cho ch?c an :))
{   srand(time(NULL));
    freopen("min.txt","w",stdout);
    d=rand()%4+3;//s? dòng t?i da c?a ma tr?n mìn
    c=rand()%4+3;//s? c?t t?i da (cho nho nh? d? th? tru?c khi test v?i b?n d? to)
    cout<<d<<" "<<c<<endl;
    for(int i=1; i<=d; i++)
    {   for(int j=1; j<=c; j++)
            cout<<rand()%2<<" ";
        cout<<endl;
    }
    freopen("con","w",stdout);
}
int xung_quanh(int i, int j)//Hàm d?m s? mìn xung quanh ô (i,j)
{   int x=0;
    for (int k=0; k<8; k++)
        x=x+bd_min[i+dong[k]][j+cot[k]];
    return x;
}
void tao_dl()//t?o file ch?a b?n d? m?t d? t? file b?n d? mìn
{   freopen("min.txt","r",stdin);
    freopen("matdo.txt","w",stdout);
    cin>>d>>c;
    cout<<d<<" "<<c<<endl;
    for(int i=1; i<=d; i++)
        for(int j=1; j<=c; j++)
            cin>>bd_min[i][j];
    for(int i=1; i<=d; i++)
    {   for(int j=1; j<=c; j++)
            cout<<xung_quanh(i,j)<<" ";
        cout<<endl;
    }
    freopen("con","r",stdin);
    freopen("con","w",stdout);
}
void nhapdl()//Nh?p b?n d? m?t d?
{   freopen("matdo.txt","r",stdin);
    cin>>d>>c;
    for(int i=1; i<=d; i++)
        for(int j=1; j<=c; j++)
            cin>>bd_md[i][j];
    freopen("con","r",stdin);
}
void xuatdl(int x[][Max_N])//in ra màn hình ma tr?n x
{   for(int i=1; i<=d; i++)
    {   for(int j=1; j<=c; j++)
            cout<<setw(3)<<x[i][j];
        cout<<endl;
    }
}
void chuanbi()
{   for(int i=0; i<=d+1; i++)
        for(int j=0; j<=c+1; j++)
            bd_min[i][j]=0;
}
bool kiemtra()//Ki?m tra b?n d? mìn tìm du?c xem có v? trí nào không dúng (có s? mìn xung quanh nó khác v?i d? li?u ban d?u)
{   for(int i=1; i<=d; i++)
        for(int j=1; j<=c; j++)
            if (xung_quanh(i,j)!=bd_md[i][j])
                return false;
    return true;
}
bool tiep_ko(int d1, int c1) // ki?m tra xem có nên di ti?p không
{   for (int i=1; i<=c1-2; i++)
        if(xung_quanh(d1-1,i)!=bd_md[d1-1][i])//có 1 v? trí ? dòng phía trên b? sai so v?i b?n d? m?t d? g?c
            return false;
    return true;
}
void thuchien(int d1, int c1)
{   if (d1<=d)
    {   if (c1<=c)
            for (int k=0; k<2; k++)
            {   bd_min[d1][c1]=k;//th? l?n lu?t v? trí [d1,c1] = 0,1
                if (d1>1 && c1>2) //b?t d?u t? dòng 2, n?u c?t dã l?n hon 2 thì các v? trí ? dòng trên nó và tru?c nó 2 c?t ph?i dúng thì m?i th? ti?p
                {
                    if (tiep_ko(d1,c1))
                        thuchien(d1,c1+1);
                }
                else thuchien(d1,c1+1);// n?u dòng=1 ho?c c?t m?i là c?t 1,2 thì c? làm bình thu?ng
            }
        else thuchien(d1+1,1);//Khi dã th? h?t 1 dòng thì th? d?n dòng ti?p theo v?i c?t d?u tiên
    }
    else if (kiemtra()) //ki?m tra b?n d? mìn tìm du?c có phù h?p v?i bd m?t d? không?
        xuatdl(bd_min);
}
int  main()
{
    sinh_dl();//sinh ra b?n d? mìn
    tao_dl();// t?o b?n d? m?t d?

//    nhapdl();
//    xuatdl(bd_md);//in b?n d? m?t d?
//    cout<<endl;
//    long t1=clock();//l?y th?i gian h? th?ng ? th?i di?m b?t d?u
//    chuanbi();
//    thuchien(1,1);//b?t d?u th? t? dòng 1, c?t 1
//    long t2=clock();//l?y th?i gian h? th?ng ? th?i di?m k?t thúc
//    cout<<"thoi gian thuc hien:"<<(float) (t2-t1)/CLOCKS_PER_SEC;
    return 0;
}
