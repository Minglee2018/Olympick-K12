#include <bits/stdc++.h>

using namespace std;
long long n,a[50],b[50],c[50],sum=0,k=0,j;
unsigned long long res=1;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(j=0;j<n-1;j++)
        cin>>b[j];

    for(int i=0;i<=n-2;i++){
        sum+=a[i];
        if(b[i]==1){
          c[k++]=sum;
          sum=0;
        }
    }
    if(sum!=0) c[k++]=sum;
    if(b[n-2]==0)
        c[k-1]+=a[n-1];
    else if(b[n-2]==1)
        c[k-1]=c[k-1]*a[n-1];
    for(int i=0;i<k;i++){
       if(c[i]!=0) res*=c[i];
    }
    cout<<res;
    return 0;
}
