#include<bits/stdc++.h>
using namespace std;
 int main()

 {
       int v1,v2,t,d,n=0,sum=0; cin>>v1>>v2>>t>>d;
       if(v1>v2)
        swap(v1,v2);
        if(v1<v2)
            sum=v1;
      while(v1<v2){
        v1+=d;
        sum+=v1;
        t--;
        n=1;
      }
      if(n==1)
        sum=sum-v1;
     int q=t/2,left=q*(2*v1+(q-1)*d)/2,right=q*(2*v2+(q-1)*d)/2,mid=v2+q*d;
     if(t%2==0)
        sum=sum+left+right;
     else
        sum=sum+left+right+mid;
     cout<<sum;
     return 0;
 }
