#include <bits/stdc++.h>

using namespace std;
string s; int n,dem;
int main()
{
    cin>>n>>s;
    for(int i=s.length()-1; i>=1; i--)
    {
        if(s[i]==s[i-1])
            s.erase(i,1),dem++;
    }
    cout<<dem++;
    return 0;
}
