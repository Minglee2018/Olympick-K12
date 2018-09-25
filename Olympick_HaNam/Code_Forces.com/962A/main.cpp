#include <iostream>
#define ll long long
using namespace std;
void chemthan()
{
    ll n,s=0,z=0,ans=1; cin>>n; int a[n+10];a[0]=0;
    for(int i=1; i<=n; i++){
        cin>>a[i],s+=a[i];
    }
    for(int i=1; i<=n; i++){
        z+=a[i];
        if(z*2>=s){
            ans=i;
            break;
        }
    }
    cout<<ans;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    chemthan();
    return 0;
}
