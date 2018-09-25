#include <bits/stdc++.h>

using namespace std;

long long f[100002]={},a[100002],Q[100002]={},l[100002],r[100002],d[100002];
int n,m,k;

int main()
{
    //freopen("f.inp","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> k;
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int i=1;i<=m;i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }

    Q[0]=0;
    for (int i=1;i<=k;i++)
    {
        int x,y;
        cin >> x >> y;
        Q[x]=Q[x]+1;
        Q[y+1]=Q[y+1]-1;
    }
    for (int i=1;i<=m;i++)
        Q[i]=Q[i-1]+Q[i];

    for (int i=1;i<=m;i++)
    {
        f[l[i]]=f[l[i]]+d[i]*Q[i];
        f[r[i]+1]=f[r[i]+1]-d[i]*Q[i];
    }

    f[0]=0;
    for (int i=1;i<=n;i++)
    {
        f[i]=f[i-1]+f[i];
    }


    for (int i=1;i<=n;i++) cout << f[i]+a[i] << " ";
    return 0;
}
