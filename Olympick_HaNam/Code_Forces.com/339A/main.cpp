#include <bits/stdc++.h>
using namespace std;
int a[100],j;
string s;
int main(){
     cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
         string temp;
         temp =s[i];
        int val= atoi(temp.c_str());
           a[j++]=val;
           temp.clear();
        }
   }
    sort(a,a+j);
   for(int i=0;i<=j-2;i++)
   cout<<a[i]<<"+";
   cout<<a[j-1];
    return 0;
}
