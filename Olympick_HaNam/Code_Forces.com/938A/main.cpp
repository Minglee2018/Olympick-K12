#include <bits/stdc++.h>
#include <string>
using namespace std;

int chek(char x){
    bool k=false;
    string a="ueoaiy";
    if(a.find(x)>=0 && a.find(x)<=5)
    k=true;
    return k;
}
int main()
{
     string s;  int n;
    cin>>n>>s;
        for(int j=0;j<n;j++){
        for(int i=0;i<s.length();i++){
          if(chek(s[i])==true && chek(s[i+1])==true)
          s.erase(i+1,1);
                }
            }
     cout<<s;
    return 0;
}
