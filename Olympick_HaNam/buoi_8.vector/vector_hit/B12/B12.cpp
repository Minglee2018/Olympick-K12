#include <bits/stdc++.h>

using namespace std;
vector <int> a; int n;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) {
        int temp; cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    for(int j=0;j<a.size();j++) cout<<a[j]<<" "; cout<<endl;
    cout<<a[a.size()-2]<<" "<<a[1];

    return 0;
}
