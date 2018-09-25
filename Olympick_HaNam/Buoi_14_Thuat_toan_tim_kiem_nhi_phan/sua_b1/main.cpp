#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("F.INP","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int tt=1;tt<=t;tt++)
    {
        long long n,m,s=0,a[1001];
        cin >> n >> m;
        for (int i=1;i<=n;i++)
        {
            cin >> a[i];
            s=s+a[i];
        }

        long long left=1;
        long long right=s;
        //cout << tt <<". " << left << " " << right << endl;
        while (left<=right)
        {
            long long mid = (left+right)/2;
            long long dem = 1;
            long long D = mid;
            bool kt=false;
            for (int i=1;i<=n;i++)
                if (a[i]<=D) D=D-a[i];
                else
                {
                    D=mid-a[i];
                    if (a[i]>mid)
                    {
                        kt=true;
                        break;
                    }
                    dem++;
                }
            if (kt==true) left=mid+1;
            else
                if (dem<=m) right = mid -1;
                else left=mid+1;
            //cout << tt <<". " << left << " " << mid << " " << right << endl;
        }
        cout << "Case " << tt << ": " << left << endl;
    }
    return 0;
}
