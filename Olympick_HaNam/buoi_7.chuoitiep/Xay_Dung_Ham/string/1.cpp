#include <bits/stdc++.h>
using namespace std;
int length(string a)
{
    int i=0;
    while(a[i]!='\0')
        i++;
    return i;
}
void Insert(string &a,int pos,string &b)
{
    string c;
    if(pos==0){
        b+=a;
        a=b;
    }
    else{
    for(int i=0;i<pos;i++)
        c+=a[i];
    c+=b;
    for(int i=pos;i<length(a);i++)
        c+=a[i];
        a=c;
    }
}
int main()
{
    string a,b;
    cin>>a>>b;
    int pos;
    cin>>pos;
    Insert(a,pos,b);
    cout<<a;
    return 0;
}
