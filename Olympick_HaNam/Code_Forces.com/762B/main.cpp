#include <bits/stdc++.h>
#define ll long long
#define fi val[i].first
#define fs val[i].second
using namespace std;

void chemthan(){

    ll a,b,c,m;
    cin >> a >> b >> c >> m;
    pair <ll,string> val[m+10];
    for(int i=0; i<m; i++) cin >> fi >> fs;
    sort(val,val+m);
    ll ans=0,cnt=0;
    for(int i=0; i<m; i++){
        if(a!=0&&fs=="USB")    a--;
        else if(b!=0&&fs=="PS/2") b--;
        else if(c!=0)   c--;
        else  continue;
      ans+=fi,cnt++;

    }
    cout<<cnt<<" "<<ans;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    chemthan();
    return 0;
}
