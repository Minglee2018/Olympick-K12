#include <bits/stdc++.h>

using namespace std;
int s[10]={0,1,2,3,322,5,53,7,7222,7332};
struct cmp{
    bool operator()(int a,int b)
    {
        return a>b;
    }
    };
multiset<int,cmp> b;
 void tach(int k)
{
    while(k!=0)
    {
        b.insert(k%10);
        k/=10;
    }
}
int main()
{
    long long n,z;cin>>n>>z;
    while(z!=0)
    {
        int k=z%10;
        z/=10;
        if(k==1||k==0)
            continue;
        tach(s[k]);
    }
    multiset<int> ::iterator it=b.begin();
    for(;it!=b.end();it++)
        cout<<*it;
    return 0;
}
