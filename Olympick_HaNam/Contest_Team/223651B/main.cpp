#include <bits/stdc++.h>
using namespace std;

string a;
string b="0",c="1";
void make(){

 for(int i=1; i<=10000; i++){
    for(int j=1; j<=i; ++j){
        if(j==1) a+=c;
        else a+=b;
    }
 }
}
int main()
{
    make();
    cout<<a.length();
    // int k; cin>>k;
     //cout<<a[k-1];

    return 0;
}
