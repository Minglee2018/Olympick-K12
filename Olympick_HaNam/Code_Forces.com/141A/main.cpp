#include<bits/stdc++.h>
using namespace std;
string a,b,c; int k=2,z=2;
int main(){
    cin>>a>>b>>c;
    if(a.length()+b.length()==c.length() ){
    for(int i=0;i<a.length();i++){
        if(c.find(a[i])>=0 && c.find(a[i])<=c.size()-1)
            c.erase(c.find(a[i]),1);
    }
    for(int i=0;i<b.length();i++){
        if(c.find(b[i])>=0 && c.find(b[i])<=c.size()-1)
            c.erase(c.find(b[i]),1);
    }
    if(c.size()!=0){
        cout<<"NO";
        return 0;
        }
    cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}
