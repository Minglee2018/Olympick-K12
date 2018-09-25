#include<bits/stdc++.h>

using namespace std;
int n;
set <int> m;
int main(){
    cin>>n;
  for(int i=0;i<n;i++){
    int temp; cin>>temp;
    if(temp!=0) m.insert(temp);
  }
    cout<<m.size();
     return 0;
}
