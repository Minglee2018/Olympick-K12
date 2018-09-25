#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<vector<int> > a(n,vector<int>(n));

    int z=n,d=0,temp=1;
    while(temp-1!=n*n){
        for(int i=d;i<z;i++)
            a[d][i]=temp++;
        for(int i=d+1;i<z;i++)
            a[i][z-1]=temp++;
        for(int i=z-2;i>=d;i--)
            a[z-1][i]=temp++;
        for(int i=z-2;i>d;i--)
            a[i][d]=temp++;
        z--;d++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<"\t";
            cout<<endl;
    }
    return 0;
}
