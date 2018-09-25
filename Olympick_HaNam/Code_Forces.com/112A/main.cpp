#include <bits/stdc++.h>
using namespace std;
string a,b;
int main()
{
    cin>>a>>b;
    for(int i=0;i<a.length();i++){
        if(a[i]>='A' && a[i]<='Z') a[i]+=32;
    }
    for(int j=0;j<b.length();j++){
        if(b[j]>='A' && b[j]<='Z') b[j]+=32;
    }

    if(a>b)cout<<1;
    else if(a<b)cout<<-1;
    else
        cout<<0;
    return 0;
}
