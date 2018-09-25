#include<bits/stdc++.h>

using namespace std;
long long sum,n;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
    int temp; cin>>temp;
    if(n%temp==0) sum+=temp;
    }
    cout<<sum;
    return 0;
}
