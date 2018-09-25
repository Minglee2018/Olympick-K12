#include <bits/stdc++.h>

using namespace std;
 int a1[2002],b1[2002],b2[2002],a2[2002];
 struct cmp
 {
     bool operator()(int a,int b)
     {
         return a>b;
     }
 };
int main()
{
    map <int,int,cmp> m;
    int n,j=0; cin>>n;
    for(int i=0;i<n;i++){
        int temp=0; cin>>temp;
        m[temp]++;
        a1[j++]=temp;
    }
    int k1=0,k2=0;
    for(map <int,int,cmp> :: iterator it=m.begin();it!=m.end();it++){
        b1[k1++]=(*it).first;
        b2[k2++]=(*it).second;
    }
      int d=1,dem=0;
        for(int t=0;t<k1;t++){
             dem+=b2[t];
             if(b2[t-1]>1)
                d=dem-b2[t]+1;
            for(int i=0;i<n;i++){
            if(a1[i]==b1[t]){
                   a2[i]=d;
             }
           }
         d++;
        }
  for(int i=0;i<n;i++){
    cout<<a2[i]<<" ";
  }
    return 0;
}
