#include <bits/stdc++.h>

using namespace std;
map <string,int> m; long long k;
int main()
{
    cin>>k;
    for(long long i=0;i<k;i++){
        string x; cin>>x;
        m[x]++;
    }

    int z=m.size(),b[z+1],t=0;
    for( map<string,int> :: iterator it=m.begin();it!=m.end();it++)
         b[t++]=(*it).second;


    long long ans=0;
    for(int j=0;j<t;j++){
        if(b[j]<=5) ans+=100;
        else if(b[j]>5) ans+=100+(b[j]-5);
    }
    cout<<ans;
    return 0;
}
