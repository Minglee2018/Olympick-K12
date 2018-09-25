#include <bits/stdc++.h>

using namespace std;
vector <int> a,b;
int main()
{
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        if(temp%2==0) a.push_back(temp);
        else b.push_back(temp);
    }
    for(int i=0;i<a.size();i++) cout<<a[i]<<" "; cout<<endl;
    for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
    return 0;
}
