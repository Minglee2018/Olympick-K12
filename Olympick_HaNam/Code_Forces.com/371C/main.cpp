#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll nb,ns,nc,pb,ps,pc,l,r=10e12,t,ans=0;string s;
int a[100];
int main(){
     cin>>s>>nb>>ns>>nc>>pb>>ps>>pc>>t;
     for(int i=0; i<s.size(); i++) a[s[i]]++;
     while(l<=r){
         ll m=(l+r)/2;
         if(max(0ll,m*a['B']-nb)*pb+max(0ll,m*a['S']-ns)*ps+max(0ll,m*a['C']-nc)*pc <= t)
                ans=m,l=m+1;
         else
            r=m-1;
     }
    cout<<ans;
    return 0;
}
