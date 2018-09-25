#include<bits/stdc++.h>

using namespace std;
main()
{
    int n; cin>>n;
    for(int i=1; i<=n; i++)
    {
        long long t,sum=0,ans=0;
        cin>>t;
        ans=(t+1)*t/2;
        for(long long  j=0;j<=t;j++)
        {
            int z=pow(2,j);
            if(z>t) break;
            sum+=pow(2,j);
        }
        cout<<ans-2*sum<<endl;
    }
}
