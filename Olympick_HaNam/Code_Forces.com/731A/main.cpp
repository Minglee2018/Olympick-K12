#include <bits/stdc++.h>

using namespace std;
string s;  int x=97,y,ans;
int main(){
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        y=s[i]; int z=abs(y-x);
        ans+=min(z,26-z),x=y;
    }
    cout<<ans;
    return 0;
}
