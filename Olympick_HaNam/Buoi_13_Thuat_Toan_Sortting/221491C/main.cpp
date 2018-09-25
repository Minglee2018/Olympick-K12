#include <bits/stdc++.h>

using namespace std;
long long a,b,c;
unsigned long long sum=0,z,res;
int main()
{
    cin>>a>>b>>c;
    z=a+b-c,res=0;
    if(a>b)
    {
        res=b;
        while(res--){
            if(res*3<=z) break;
        }
        res++;
        if(res*3>z) res--;
    }
    else
    {
        if(res%2!=0)res=a/2+1;
        else res=a/2;
        while(res--){
            if(res*3<=z) break;
        }
            res++;
            if(res*3>z) res--;
    }
    cout<<res;
    return 0;
}

