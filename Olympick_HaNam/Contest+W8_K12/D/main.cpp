#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n; cin>>n;
     int a[n][3]; int k=0;
     for(int i=1; i<n; i++){
        for(int j=i; j<=n; j++){
            float z=sqrt(i*i+j*j);
            if((int)z==z){
                if(i<=n && j<=n && z<=n){
                   a[k][0]=i,a[k][1]=j,a[k][2]=z;
                   k++;
                }
                else
                    break;
            }
        }
     }
     cout<<k<<"\n";
     for(int i=0; i<k; ++i){
        for(int j=0; j<3; ++j){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
     }
    return 0;
}
