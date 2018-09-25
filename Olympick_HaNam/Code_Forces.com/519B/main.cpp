#include<bits/stdc++.h>
using namespace std;
 int main ()
 {
     int n; cin>>n;
     long long z1=0,z2=0,z3=0;
     for(int i=0;i<n;i++){
        int x; cin>>x;
        z1+=x;
     }
     for(int j=0; j<n-1;j++){
        int y; cin>>y;
        z2+=y;
     }
     for(int k=0;k<n-2;k++){
        int z;cin>>z;
        z3+=z;
     }
     cout<<z1-z2<<endl<<z2-z3;
     return 0;
}
