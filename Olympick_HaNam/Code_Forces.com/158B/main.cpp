#include <bits/stdc++.h>

using namespace std;
 map<int,int> m;
 int n,z,k=0,a[5],res=0;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x,m[x]++;
    }
    for(map<int,int> :: iterator it=m.begin();it!=m.end();it++)
        a[(*it).first]=(*it).second;
     res+=a[4],res+=a[2]/2;
     if(a[2]%2!=0) k=2;
     long long b=a[1]+a[3]*3;
     if(b>=4) res+=b/4,z=b%4;
     else z=b; //cout<<k<<" "<<z;
     if(z+k>4 )
        res+=2;
       else if(z+k>0 && z+k<=4)
        res++;
     cout<<res;
    return 0;
}
