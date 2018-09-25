#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,avg=0,res=0; cin>>n;
    ll a[n];
    for(int i=0; i<n; i++){
        cin>>a[i]; avg+=a[i];
    }
    sort(a,a+n);
    if(avg%n!=0){
        cout<<-1; return 0;
    }
    avg=avg/n;
    res=a[n-1]-avg;
    for(int i=n-1; i>=0; i--){
        if(a[i]>avg) res=min(res,a[i]-avg);
    }
    cout<<res;
    return 0;
}
