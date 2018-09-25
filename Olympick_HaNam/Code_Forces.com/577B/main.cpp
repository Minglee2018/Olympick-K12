#include<bits/stdc++.h>
using namespace std;
int n,m;
long long sum;
int main ()
{
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
         int x; cin>>x,a[i]=x%m;
         if(x%m==0) {cout<<"YES"; return 0;}
    sum+=a[i];
    }
    if(sum%m==0){cout<<"YES"; return 0;}
    cout<<"NO";
    return 0;
}
