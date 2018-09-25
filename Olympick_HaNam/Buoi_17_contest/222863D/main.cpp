#include <bits/stdc++.h>
using namespace std;
int man()
{
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n;++i) cin>>a[i];
    sort(a,a+n);
    int i=n/2-1;
    for(int j=i; j>=0; j--){
        if(a[j]*2<=a[n-1])n--;
    }
    cout<<n;
    return 0;
}
