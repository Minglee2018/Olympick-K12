#include <bits/stdc++.h>
using namespace std;
long long n,s; pair<float,int> a[100001];
int main(){
    cin>>n>>s;
    for(int i=0; i<n; i++){
        int x,y; cin>>x>>y>>a[i].second;
        a[i].first=sqrt(x*x+y*y);
    }
    sort(a,a+n);
    for(int i=0; i<n; i++){
         s+=a[i].second;
         if(s>=1000000){
            cout<<fixed<<setprecision(8)<<a[i].first;return 0;
        }
    }
    cout<<-1;
}
