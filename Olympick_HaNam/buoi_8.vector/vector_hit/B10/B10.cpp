#include <bits/stdc++.h>

using namespace std;
int n; vector <int> a;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        a.push_back(temp);
    }

    for(int i=0;i<n/2;i++){
        cout<<a[n-1-i]<<" ";
    }
    if(n%2!=0){
        cout<<a[n/2];
    }
    return 0;
}
