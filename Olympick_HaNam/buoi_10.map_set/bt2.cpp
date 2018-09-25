#include <bits\stdc++.h>
using namespace std;
int main()
{
    map <int,int> u;
    map <int,int> v;
    int n,m,x=0; cin>>n>>m;
     for(int i=0;i<n;i++){
        int temp; cin>> temp;
        u[temp]++;
      }
      for( int i=0;i<m;i++){
        int temp; cin>>temp;
        v[temp]++;
      }
    map <int,int>:: iterator k;

    for( k=u.begin();k!=u.end();k++)
    {
               x=x+(*k).second * v[(*k).first];
    }
    cout<<x;
    return 0;
}
