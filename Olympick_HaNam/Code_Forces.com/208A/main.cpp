#include <bits/stdc++.h>

using namespace std;
string s;
int main(){
    cin>>s; int z=s.length();
    for(int i=0;i<z;i++){
        int j=s.find("WUB",0);
        if(j!=-1){
          if(j==0) s.erase(j,3);
          if(j>0){
            s.erase(j,2);
            s[j]=32;
           }
        }
    }
    cout<<s;
    return 0;
}
