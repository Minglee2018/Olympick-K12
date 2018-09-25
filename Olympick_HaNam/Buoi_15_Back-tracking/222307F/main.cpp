#include <bits/stdc++.h>
using namespace std;
string a[1000000];
bool compare (string b,string c){
  if(c+b > b+c)
    return true;
  else
    return false;
}
int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n,compare);
    for(int j=n-1; j>=0; j--)
        cout<<a[j];
    return 0;
}
