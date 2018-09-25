#include <bits/stdc++.h>

using namespace std;
long long sum1,sum2;
int main()
{
    int n; cin>>n;
    for(int i=0;i<n;i++){
        if(i%2==0) sum1+=i;
        else sum2+=i;
    }
      cout<<sum1<<" "<<sum2;
    return 0;
}
