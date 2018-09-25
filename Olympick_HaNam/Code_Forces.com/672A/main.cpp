#include <bits/stdc++.h>
using namespace std;
template <typename T>

string invoker(T Number)
{
    stringstream convert;
    convert<<Number;
    return convert.str();
}
int main()
{   string s;
    int n,j=0; cin>>n;
    for(int i=0;i<=505;i++){
        s+=invoker(i);
    }
  cout<<s[n];
    return 0;
}
