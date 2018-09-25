#include <bits/stdc++.h>

using namespace std;
string s;

int main()
{
    cin>>s;
    for(int j=0;j<s.length();j++)
    for(int i=0;i<s.length();i++){
       if(s[i]=='X' || s[i]=='x')
        s.erase(i,1);
    }
    cout<<s;
    return 0;
}
