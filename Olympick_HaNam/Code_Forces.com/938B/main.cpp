#include<bits/stdc++.h>
using namespace std;
vector <int> a,b;
long long time_a,time_b;
int main()
{
    int n; cin>>n;
    for(int i=0; i<n; i++){
        long long x; cin>>x;
        if(x<=5e5)
            a.push_back(x);
        else
            b.push_back(x);
    }
    if(a.size()!=0){
        time_a=a.back()-1;
    }
    if(b.size()!=0){
        time_b=1e6-b.front();
    }
    if(time_a>time_b)
        cout<<time_a;
    else
        cout<<time_b;
    return 0;
}
