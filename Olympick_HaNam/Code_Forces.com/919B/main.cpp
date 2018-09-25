#include <bits/stdc++.h>
using namespace std;
bool okey(long long x)
{
    int s=0;
    while(x!=0){
        s+=x%10;
        x=x/10;
    }
        if(s==10) return true;
        else      return false;
}
int main()
{
    int n; cin>>n;
    long long k=19;
    while(n!=0){
       if(okey(k)==true)
        n--;
        k=k+9;
    }
    cout<<k;
    return 0;
}
