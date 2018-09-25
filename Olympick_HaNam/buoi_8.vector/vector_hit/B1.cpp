#include<bits/stdc++.h>
using namespace std;
vector <int> a;
int main()
{
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
