#include <bits/stdc++.h>

using namespace std;


map <long long, long long> amap;
pair <long long ,long long> a[100001];
long long d,n,ma,vt,f[100001];


bool compare(pair<long long,long long> a, pair<long long,long long> b)
{
    if (a.first>b.first) return true;
    else return false;
}

int bs(long long x, int l, int r)
{
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (x<=a[mid].first) r=mid-1;
        else l=mid+1;
    }
    return l;
}

int main()
{
    //freopen("F.INP","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> d;
    for (int i=1;i<=n;i++)
    {
        long long x,y;
        cin >> x >> y;
        amap[x]+=y;
    }
    n=0;
    for (map<long long,long long> :: iterator i=amap.begin();i!=amap.end();i++)
    {
        n++;
        a[n].first=i->first;
        a[n].second=i->second;
    }
    //for (int i=1;i<=n;i++) cout << a[i].first << " ";cout<<endl;
    //for (int i=1;i<=n;i++) cout << a[i].second << " ";cout<<endl;
    f[0]=0;
    ma=0;
    for (int i=1;i<=n;i++) f[i]=f[i-1]+a[i].second;
    //for (int i=1;i<=n;i++) cout << f[i] << " ";cout<<endl;
    for (int i=1;i<=n;i++)
    {
        vt=bs(a[i].first-d+1,1,i);
        if (ma<f[i]-f[vt-1])
            ma=f[i]-f[vt-1];
    }
    cout << ma;
    return 0;
}
