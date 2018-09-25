#include <bits/stdc++.h>
using namespace std;
int d[50005];
int main()
{
    int n,j=0; cin>>n;
    for(int i=1; i<=n; i++){
        cin>>d[i];
    }
    int a,b,c;
    for(int i=1;i<=n;i++){
        a=d[i];b=d[a];c=d[b];
        if(a!=b && b!=c)
        {
            if(c==i){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
