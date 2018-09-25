#include <bits/stdc++.h>

using namespace std;
string s,b="abcdefghijklmnopqrstuvwxyz";int n,res;
int main(){
      cin>>n>>s; if(s.length()<26) {cout<<"NO"; return 0;}
      for(int i=0;i<s.length();i++){
        if(s[i] >= 'A' && s[i] <= 'Z') s[i]+=32;
      }
     for(int i=0;i<b.length(); i++){
     if (s.find(b[i],0) != -1)
                res++;
     }
     if(res==26) cout<<"YES";
     else cout<<"NO";
    return 0;
}
