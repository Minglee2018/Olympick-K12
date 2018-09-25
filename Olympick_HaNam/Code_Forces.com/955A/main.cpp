#include <bits/stdc++.h>
using namespace std;
int hh,mm,h,d,c,n;
int main(){
    cin >> hh >> mm >> h >> d >> c >> n;
    double ans=0;
    if(hh>=20)
        ans=(h+n-1)/n*c*0.8;
    else{
        int m=(20-hh)*60-mm;
        ans=(h+n-1)/n*c;
        ans=min(ans,(h+m*d+n-1)/n*c*0.8);
    }
   cout<<fixed<< setprecision(20)<<ans;
    return 0;
}
