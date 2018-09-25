#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    long long a[n];
    for(int k=0;k<n;k++){
        cin>>a[k];
    }
    for(int i=0;i<n/2;i=i+2){
     swap(a[i],a[n-i-1]);
    }
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    return 0;
}
