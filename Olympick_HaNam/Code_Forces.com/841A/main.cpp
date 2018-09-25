#include <bits/stdc++.h>
using namespace std;
map <string,int> m;
string u;

int main()
{   bool j=true;

    int n,q; cin>>n>>q>>u;
    for(int i=0;i<n;i++){
        string temp;
        temp=u[i];
        m[temp]++;
    }
      for(map<string,int> :: iterator i=m.begin();i!=m.end();i++)
         if((*i).second>q)
        j=false;

        if(j)
     cout<<"YES";
     else
        cout<<"NO";
    return 0;
}
