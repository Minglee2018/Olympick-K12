#include <bits/stdc++.h>
using namespace std;
void chemthan()
{
    map<char,int> a;
    map<char,int> :: iterator it;
    int n,ans=0;string s;  cin>>n>>s;
    if(s.length()>26)
    cout<<-1;
    else{
    for(int i=0; i<s.length(); i++)
          a[s[i]]++;
    ans=n-a.size();
    }
    cout<<ans;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    chemthan();
    return 0;
}
