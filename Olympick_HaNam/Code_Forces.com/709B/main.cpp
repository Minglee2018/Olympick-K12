#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,i,ans;scanf("%d%d",&n,&x); int a[n+5];
    for(int i=0; i<n; i++) scanf("%d",&a[i]);
    if(n==1){printf("0");return 0;}
    sort(a,a+n);
    ans=min(abs(a[0]-x),abs(a[n-2]-x))+a[n-2]-a[0];
    ans=min(ans,min(abs(a[1]-x),abs(a[n-1]-x))+a[n-1]-a[1]);
    printf("%d",ans);
    return 0;
}
