//in ra chuoi nhieu chu hoa nhat, ki tu so nhat, nhieu tu nhat?
#include<bits/stdc++.h>
using namespace std;
string a, b, c;
char x[3],y[3],z[3];
void Kiem_Tra()
{
    for(int i=0;i<a.length();i++){
        if(a[i]>=65&&a[i]<=90)
            x[1]++;
        if(a[i]>=48&&a[i]<=57)
            y[1]++;
        if(a[i]==' ')
            z[1]++;
    }
    for(int i=0;i<b.length();i++){
        if(b[i]>=65&&b[i]<=90)
            x[2]++;
        if(b[i]>=48&&b[i]<=57)
            y[2]++;
        if(b[i]==' ')
            z[2]++;
    }
    for(int i=0;i<c.length();i++){
        if(c[i]>=65&&c[i]<=90)
            x[3]++;
        if(c[i]>=48&&c[i]<=57)
            y[3]++;
        if(c[i]==' ')
            z[3]++;
    }
}
void So_Sanh(){
	int max=x[1];
    string s[3]=a;
    if(x[2]>max){
        max=x[2];
        s[0]=b;
    }
    if(x[3]>max)
        s[0]=c;
    max=y[1];
    if(y[2]>max){
        max=y[2];
        s[1]=b;
    }
    if(y[3]>max)
        s[1]=c;
    max=z[1];
    if(z[2]>max){
        s[2]=b;
    max=z[2];
    }
    if(z[3]>max)
        s[2]=c;
    cout<<s[0]<<endl<<s[1]<<endl<<s[2];
}
int main(){
	cin>>a>>b>>c;
	Kiem_Tra();
	So_Sanh();
	return 0;
}
