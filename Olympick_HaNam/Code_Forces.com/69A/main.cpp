#include<bits/stdc++.h>
using namespace std;
int d,e,f;
int main()
{
    int n,a,b,c; cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        d+=a;e+=b;f+=c;
    }
   if(d==e && d==f && e==f){
    if(d==0 && e==0 && f==0){
        cout<<"YES";
        return 0;
      }
   }
    cout<<"NO";
    return 0;
}
