#include <bits\stdc++.h>

using namespace std;
int main()
{
    set <int> u,v;
    set <int> :: iterator i;
    set <int> :: iterator j;
    int n,m,dem=0; cin>>n>>m;
    for( int t=0;t<n;t++)
    {
        int y; cin>> y;
         u.insert(y);
    }
    for(int t=0;t<m;t++)
    {
        int x; cin>>x;
        v.insert(x);
    }
    for(i=u.begin();i!=u.end();i++){
        for(j=v.begin();j!=v.end();j++)
           {
               if((*i)==(*j))
           dem++;
           }
    }
    cout<<dem;
    return 0;
}
