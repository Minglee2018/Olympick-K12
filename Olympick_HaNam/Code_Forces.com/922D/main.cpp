#include <bits/stdc++.h>
#define db double
using namespace std;
int main()
{
    int n; cin>>n;
    vector <pair <db,string> > u;
    for(int i=0; i<n; i++)
    {
        string z; cin>>z;
        int s=0,h=0;
        for(int j=0;j<z.size();j++)
        {
              if(z[j]=='s') s++;
              if(z[j]=='h') h++;
        }
        u.push_back(make_pair(db(h)/db(s),z));
    }
    sort(u.begin(),u.end());
    string ans="";
    for(int i=0;i<u.size();i++)
        ans+=u[i].second;
        long long res=0,x=0;
    for(int i=0;i<ans.size();i++)
    {
         if(ans[i]=='s') x++;
         if(ans[i]=='h') res+=x;
    }
     cout<<res;
    return 0;
}
