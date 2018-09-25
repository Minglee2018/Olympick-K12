#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool k=true; int z,res=0;
    string s; cin>>s;
    if(s.length()%2!=0) z=s.length()/2;
        else z=(s.length()-1)/2;
    for(int i=0;i<=z;i++){
        if(s[i]!=s[s.length()-1-i]){
            k=false;
        }
    }
    if(k==true) {cout<<s; return 0;}
    cout<<s;
    for(int i=s.length()-1;i>=0;i--)
        cout<<s[i];
    return 0;
}
