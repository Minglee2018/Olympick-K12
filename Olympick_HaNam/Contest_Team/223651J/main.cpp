#include <bits/stdc++.h>
#define ll long long
using namespace std;
int D[10000][5];
int n,t,p,ans;
 int main()
 {
     ios_base::sync_with_stdio(false),cin.tie(NULL);
     cin>>n>>t>>p;
     for(int i=0; i<n; ++i){
        for(int j=0; j<=3; ++j){
            cin>>D[i][j];
        }
     }
     for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            if(D[j][0]<=t && D[j][1]<=p && D[j][4]!=-1)
            {
                ans++; D[j][4]=-1;
                t+=D[j][2],p+=D[j][3];
               // cout<<j+1<<" ";
                break;
            }
        }
     }

 cout<<ans;

 }
