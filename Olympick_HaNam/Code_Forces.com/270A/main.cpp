#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    for(int i=0;i<t;i++){
        int z; cin>>z;
       if(360%(180-z)==0) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}
