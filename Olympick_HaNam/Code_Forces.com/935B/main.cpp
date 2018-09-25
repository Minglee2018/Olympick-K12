#include <bits/stdc++.h>
using namespace std;
char s[1000001];
char invoker(int q,int w,int e,int r){
  if(e==q){char d1='U';return d1;}
  if(r==w){char d2='R';return d2;}
}

int main()
{
   int n,x=0,y=0,res=0,x1=0,y1=0; cin>>n>>s;
   for(int i=0;i<n;i++){
        if(i>0){
        if(s[i-1]=='U') y1++;
        if(s[i-1]=='R') x1++;
   }
        if(s[i]=='U') y++;
        if(s[i]=='R') x++;
    if(x==y && invoker(x,y,x1,y1)==s[i+1])
        res++;
   }
   cout<<res;
    return 0;
}
