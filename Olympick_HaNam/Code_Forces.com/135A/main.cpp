#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    long long a[n],z=1,Max=0,j=0; for(int i=0;i<n;i++){
                    cin>>a[i];
                    if(Max<a[i])
                        Max=max(Max,a[i]),j=i;
                    }
                    if(a[j]!=z){
                        a[j]=z;
                    }else
                         a[j]=++z,z=1;

                    sort(a,a+n);
                    for(int i=0;i<n;i++){
                        cout<<a[i]<<" ";
                    }

    return 0;
}
