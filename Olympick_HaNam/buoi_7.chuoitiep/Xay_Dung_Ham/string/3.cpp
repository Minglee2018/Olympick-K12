#include <bits/stdc++.h>

using namespace std;
int length(string a)
{
    int i=0;
    while(a[i]!='\0')
        i++;
    return i;
}
int Find(string a,string b,int pos)
{
    string c;
    for(int i=pos;i<length(a)-1;i++){
        c=a[i];
        for(int j=i+1;j<i+1+length(b);j++){
            c+=a[j];
            if(c==b)
                return i;
        }
    }
    return -1;
}
int main()
{
    string a,b;
    int pos;
    cin>>a>>b>>pos;
    Find(a,b,pos);
    return 0;
}
