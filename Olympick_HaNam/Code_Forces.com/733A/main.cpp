#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; int k=0,z=0,Max=0,res=0;
    cin>>s; s.insert(0,"x");
    for(int i=0;i<s.length();i++){
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {
            Max=abs(i-z); z=i;
            res=max(res,Max);
        }
        if(s[i+1]==NULL){
            Max=abs(s.size()-z);
            res=max(res,Max);
        }
    }
    cout<<res;
    return 0;
}
