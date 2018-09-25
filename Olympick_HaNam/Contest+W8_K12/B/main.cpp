#include<bits/stdc++.h>
using namespace std;
vector <int> a;
int main()
{
    long long n; cin>>n;
    if(n==0){
        cout<<10;
        return 0;
    }
    if(n==1){
        cout<<1;
        return 0;
    }
    if(n<0 || n>1000000000){
        cout<<-1;
        return 0;
    }
    bool chek=true;
    for(int i=9; i>=2; i--){
        while(n%i==0){
            chek=false;
            a.push_back(i);
            n/=i;
        }
    }
    if(chek || n!=1){
        cout<<-1;
    }
    else{
       sort(a.begin(),a.end());
        for(int i=0; i<a.size();++i){
            cout<<a[i];
        }
    }
    return 0;
}
