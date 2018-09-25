#include <bits/stdc++.h>
using namespace std;
map <string,int> m;
string u;

int main()
{
    bool isoke=true;
    int n; cin>>n>>u;
    int q=n/2;
    for(int i=0;i<n;i++){
        string temp;
        temp=u[i];
        m[temp]++;
    }
   for(map<string,int> :: iterator i=m.begin();i!=m.end();i++)
   {
       int d=(*i).second;
       if(d>1 && d%q!=0) isoke=false;
   }
   if(isoke) cout<<"YES";
   else
    cout<<"NO";
    return 0;
}
