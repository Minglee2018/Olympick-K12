#include<bits/stdc++.h>

using namespace std;

int main ()
{
    bool k=true;
    string s; cin>>s;
    if(s.length()==1)
    {
        if(s[0]>='a' && s[0]<='z') s[0]-=32;
        else if(s[0]>='A' && s[0]<='Z') s[0]+=32;
        cout<<s; return 0;
    }
    else if(s=="cAPSLOCK")
        {
            cout<<"cAPSLOCK"; return 0;
        }
    for(int i=1;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z') k=false;
    }
    if(s[0]>='A' && s[0]<='Z'){
        if(k==true)
            for(int i=0;i<s.length();i++) s[i]+=32;
    }
    else if(s[0]>='a' && s[0]<='z' && k==true){
        s[0]-=32;
        for(int i=1;i<s.length();i++)  s[i]+=32;
    }
 cout<<s;
 return 0;
}
