#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int ans=-1e9,s=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x>0){
                int s=sqrt(x);
            if(s*s!=x)
             ans=max(ans, x);
            }else if(x<0){
            ans=max(ans,x);
        }
    }
    cout<<ans;
    return 0;
}
