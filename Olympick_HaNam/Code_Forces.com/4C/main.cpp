#include <bits/stdc++.h>

using namespace std;
 map <string,int> m;
  map <string,int> :: iterator it=m.begin();
int main()
{
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int z=m.size();
     string temp; cin>>temp;
        m[temp]++;
        if(z<m.size())
            cout<<"OK"<<endl;
         else
         cout<<temp<<m[temp]-1<<endl;

    }
    return 0;
}
