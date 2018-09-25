#include<bits/stdc++.h>

using namespace std;
long long k,n,d;
long long a[3000][3000];
int main()
{
    cin>>n>>k>>d;
    for(int i=0;i<n;i++)
    {
        int z=i;
        for(int j=0;j<d;j++)
        {
            a[i][j]=z%k;
            z/=k;
        }
        if(z>0){
            cout<<-1;
            return 0;
        }
    }
    for(int i=d-1;i>=0;i--){
        for(int j=0;j<n;j++){
            cout<<a[j][i]+1<<" ";
        }
        cout<<endl;
    }
return 0;
}
