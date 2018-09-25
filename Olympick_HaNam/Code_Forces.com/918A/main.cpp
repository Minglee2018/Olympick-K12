#include <bits/stdc++.h>
using namespace std;
int ary[1001]; char s[10011];
int main()
{
    int n,a=1,b=1,ans=0,j=2;
        cin>>n;
        ary[1]=1;
    while(true){
        ans=a+b;
        ary[j++]=ans;
        b=a;
        a=ans;
      if(ans>1000) break;
    }
    int t=1;
    for(int i=1; i<=n; i++){
        if(i==ary[t]){
             s[i]='O'; t++;
        }

        else
            s[i]='o';
    }
    for(int i=1 ;i<=n;i++){
        cout<<s[i];
    }
    return 0;
}
