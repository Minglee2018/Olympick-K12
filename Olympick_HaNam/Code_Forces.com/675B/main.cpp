#include<bits/stdc++.h>
using namespace std;
long long n,a,b,c,d,res;
int main(){
  cin>>n>>a>>b>>c>>d;
       for(int i=1;i<=n;i++){
       int q=i+b-c,w=i+a+b-c-d,e=i+a-d;
       if(q>=1 && q<=n && w>=1 && w<=n && e>=1 && e<=n)res++;
      }
      cout<<res*n;
    return 0;
}
