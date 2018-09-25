#include <bits/stdc++.h>

using namespace std;
long long sum;
bool chek_prime(int x){
    if(x==1 || x==2)
        return true;
    else
for(int i=2;i<x;i++)
   if(x%i==0)
    return false;

     return true;
   }
int main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        int temp; cin>>temp;
        if(chek_prime(temp)==true) sum+=temp;
    } cout<<sum;
    return 0;
}
