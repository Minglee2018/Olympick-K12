#include <bits/stdc++.h>

using namespace std;
string s;

int main(){
    getline(cin,s);
    while(true){
    if( s[0]==' ') s.erase(0,1);
    if(s[s.length()-1]==' ') s.erase(s.length()-1,1);
    if(s[0]!=' ' && s[s.length()-1]!=' ')
        break;
    }
    for(int i=0;i<s.length();i++){
        for(int j=0;j<s.length();j++){
            if(s[i]==' ' && s[i+1]==' ')
                s.erase(i,1);
                if(s[i] >= 'A' && s[i] <= 'Z') s[i] +=32;
        }
    }
    s[0]-=32;
    cout<<s;
    return 0;
}
