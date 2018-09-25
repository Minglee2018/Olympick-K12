#include <bits/stdc++.h>

using namespace std;
vector<int> a; int n;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";  cout<<endl;
    for(int i=a.size()-1;i>=0;i--)
        cout<<a[i]<<" ";
    return 0;
}
