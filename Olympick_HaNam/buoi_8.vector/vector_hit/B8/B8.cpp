#include <bits/stdc++.h>

using namespace std;
vector <int> a; int n,x;
int main()
{
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        a.push_back(temp);
    }
    a.erase(a.begin(),a.begin()+1);
    a.pop_back();
    if(x<a.size());
    a.erase(a.begin()+x-1,a.begin()+x);
    cout<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
