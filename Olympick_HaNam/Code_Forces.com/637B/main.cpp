#include <bits/stdc++.h>

using namespace std;
map <string,bool> m;
int main(){int n;  cin>>n;string s[n];for(int i=0; i<n; i++)cin>>s[i];for(int i=n-1; i>=0; i--){if(!m[s[i]]){cout<<s[i]<<endl;m[s[i]]=true;}}}
