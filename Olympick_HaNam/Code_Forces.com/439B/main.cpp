#include <bits/stdc++.h>
#define maxn 1000001
using namespace std;
unsigned long long ans,a[maxn];
int main()
{
    bool q=false;
    int n,x,k,i=0; cin>>n>>x; k=n;
    while(k--){
        cin>>a[i++];
        if(i>0)
        if(a[i]!=a[i-1])
            q=true;
    }
    if(q) sort(a,a+n);
    for( int i = 0; i < n; i++)
    {
        ans+=x*a[i];
        if(x!=1) x--;

    }
    cout<<ans;
    return 0;
}
