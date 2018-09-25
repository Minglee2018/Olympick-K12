#include <bits/stdc++.h>

using namespace std;
long long n,t,sum,res;
int main()
{
    cin>>n>>t;
    int a[n]; a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum<=t){
        cout<<-1; return 0;
    }
     long long i=1,k=0;
     while(k<=t){
        k+=a[i++],res=i;
     }
    //k-=a[res];
    // cout<<k;
    cout<<res;
    return 0;
}
