#include <bits/stdc++.h>
using namespace std;
bool invoker(char x){
    string b="ueoaiy";
    if(b.find(x)>=0 && b.find(x)<=b.length()-1)
        return true;
    else return false;
}
int main(){
    string a; cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]>='A' && a[i]<='Z')
            a[i]+=32;
    }
    for(int i=0;i<a.length();i++)
    for(int j=0;j<a.length();j++){
        if(invoker(a[j])==true)
            a.erase(j,1);
    }
    for(int i=0;i<a.length();i++){
        cout<<"."<<a[i];
    }
    return 0;
}
