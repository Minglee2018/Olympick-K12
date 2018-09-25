#include <bits/stdc++.h>

using namespace std;
int length(string a)
{
    int i=0;
    while(a[i]!='\0')
        i++;
    return i;
}
void Replace(string &a,int pos,int l,string &b)
{
    string c;
    if(pos==0){
        c+=b;
        for(int i=l;i<length(a);i++)
            c+=a[i];
            a=c;
    }
    else{
        for(int i=0;i<pos;i++)
            c+=a[i];
        c+=b;
        for(int i=pos+l;i<length(a);i++)
            c+=a[i];
        a=c;
        }
}
int main()
{
    string a,b;
    int pos,l;
    cin>>a>>b>>pos>>l;
    Replace(a,pos,l,b);
    cout<<a;
    return 0;
}
