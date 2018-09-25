#include <bits/stdc++.h>
#define  maxn 10000
using namespace std;
pair <int,int> a[maxn];
bool compare( pair<int,int> x, pair<int,int> y)
{
    if(x.first < y.first)
        return true;
    else
        return false;
}
int main()
{
    int n; cin>>n;
    for(int i=1; i<=n; ++i)
    {
        cin >> a[i].first; a[i].second=i;
    }
    sort(a,a+n+1,compare);
    for(int i=1;i<=n/2;i++)
    {
        cout << a[i].second <<" "<< a[n-i+1].second << endl;
    }
    return 0;
}
