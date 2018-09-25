//chen chuoi b vao a tai vi tri X
#include<bits/stdc++.h>
using namespace std;
int chen(char a[],char b[], int vt){
    char c[100];
    strcpy(c,a+vt);
    strcpy(a+vt,b);
    strcat(a,c);
    cout<<a;
}
int main(){
    char a[100],b[100];
    int vt;
    cin>>a>>b>> vt;
    chen(a,b,vt);
return 0;
}
