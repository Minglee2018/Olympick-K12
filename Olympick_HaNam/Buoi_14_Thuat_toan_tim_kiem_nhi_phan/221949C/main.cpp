#include <bits/stdc++.h>
using namespace std;
 long long Chem_than(long long c){
     long long Denta=sqrt(1-4*c);
     return (Denta-1)/2;
 }
int main(){
    unsigned long long n,m;
    cin>>n>>m;
    if(m>=n){
        cout<<n;
        return 0;
    }
    else{
         unsigned long long ans=Chem_than(-2*(n-m));
         if( ans*(ans+1)/2 >= n-m )
                cout<<ans+m;
            else
                cout<<ans+m+1;
    }
    return 0;
}
