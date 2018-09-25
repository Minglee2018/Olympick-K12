#include <iostream>
#include <cmath>
using namespace std;
int a[1001],b[1001],c[1001],l[1001];
int main()
{
int n,k;
cin>>n>>k;
for(int i=1;i<=n;i++)
cin>>a[i];
for(int i=1;i<=n;i++)
{
cin>>b[i];
c[a[i]]=b[i];
}
for(int i=1;i<=k;i++)
l[i]=c[i];
for(int i=k+1;i<=a[n];i++)
{
int luu1;
int max1=0;
for(int j=1;j<=i-k;j++)
{
max1=max(max1,c[j]);
if(max1==c[j])
luu1=j;
}
l[i]=max1+c[i];
c[i]=l[i];
max1=0;
}
int res=0;
for(int i=1;i<=a[n];i++)
{
res=max(res,l[i]);
}
cout<<res;
return 0;
}
