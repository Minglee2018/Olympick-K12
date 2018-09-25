#include <bits/stdc++.h>

using namespace std;
vector <int> a; long long sum=0;
int main(){
    int n; cin>>n;for(int i=0;i<n;i++) {int temp; cin>>temp; a.push_back(temp);sum+=temp;} cout<<sum<<endl;
    for(int j=0;j<a.size();j++) cout<<a[j]<<" ";
    return 0;
}
