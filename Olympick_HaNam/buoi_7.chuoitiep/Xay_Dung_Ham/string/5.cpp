#include <bits/stdc++.h>

using namespace std;
string Substr(string a,int pos,int l)
{
    string b;
    for(int i=pos;i<pos+l;i++)
        b+=a[i];
    return b;
}
int main()
{
    string a;
    int pos,l;
    cin>>a>>pos>>l;
    cout<<Substr(a,pos,l);
    return 0;
}
