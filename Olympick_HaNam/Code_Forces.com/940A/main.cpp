#include<bits/stdc++.h>
using namespace std;
int n,d,z=-1,a[100];
int main(){
    cin>>n>>d;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[j]-a[i]<=d)
                if(j-i>z)
                z=j-i;
        }
    }
  cout<<n-z-1;
  return 0;
}
