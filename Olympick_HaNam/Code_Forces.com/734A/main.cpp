#include <bits/stdc++.h>

using namespace std;
int n,res1,res2; string s;
int main()
{
    cin>>n>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A') res1++;
        else res2++;
    }
    if(res1>res2) cout<<"Anton";
    else if(res1==res2) cout<<"Friendship";
    else cout<<"Danik";
    return 0;
}
