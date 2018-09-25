#include<bits/stdc++.h>
using namespace std;
long double n,x,m,sum;
int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  ios_base::sync_with_stdio(false),cin.tie(NULL);
  cin>>n;
  for(int i=0;i<n;i++)cin>>x,m=max(m,x),sum+=x;
  cout<<(long long )max(ceil(sum/(n-1)),m);
}
