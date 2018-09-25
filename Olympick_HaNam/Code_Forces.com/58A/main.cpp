#include <bits/stdc++.h>
using namespace std;
int ary[101],j,k,vt,ans;
int main()
{
    string a,b="hello";
    cin>>a;
    for(int i=0;i<b.length();i++)
    {
        j=a.find(b[i],vt);
        if(j==-1) {cout<<"NO"; return 0;}
        ary[k++]=j;
        vt=j+1;
    }
    cout<<"YES";
    return 0;
}
