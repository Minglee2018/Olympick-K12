#include <bits/stdc++.h>
using namespace std;
map <int,int> m,k; vector<int> a;
int main(){int n,sum=0; cin>>n;
    for(int i=0; i<n; i++){int temp;cin>>temp;m[temp]++;}
          if(m.size()%2==0){
    for( map<int,int> :: iterator it=m.begin();it!=m.end();it++){int zz=m[(*it).first]; k[zz]++;a.push_back(zz);}
        sum=a[0]+a[1];
          if(k.size()==1 && sum==n){cout<<"YES"<<endl;
    for( map<int,int> :: iterator tt=m.begin();tt!=m.end();tt++)cout<<(*tt).first<<" ";return 0;}}
          cout<<"NO";
}
