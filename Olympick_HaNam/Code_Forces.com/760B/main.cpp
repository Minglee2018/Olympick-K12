#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,k,ans;
int main(){
    cin>>n>>m>>k;
    m-=n;
    while(m>=0){
        if(min(ans,k)==k && min(ans-1,n-k)==n-k ){
            ans+=m/n+1;//cout<<ans<< " "<<m;
            break;
        }
        else{
            ans++;
            m-=min(ans,k);
            m-=min(ans-1,n-k);
        }
        //cout<<ans<<" ";
    }
    cout<<ans;
    return 0;
}
