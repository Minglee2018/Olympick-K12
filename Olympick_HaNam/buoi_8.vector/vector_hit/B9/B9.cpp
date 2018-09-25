#include <bits/stdc++.h>

using namespace std;
int m,n;  vector<int> a,b;
int main()
{
    cin>>m>>n;
    for(int i=0;i<m+n;i++){
        int temp; cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        b.push_back(a.back());
        a.pop_back();
    }

   for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
   cout<<endl;
   for(int i=b.size()-1;i>=0;i--)
    cout<<b[i]<<" ";
    return 0;
}
