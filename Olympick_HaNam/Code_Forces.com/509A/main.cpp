#include <bits/stdc++.h>
using namespace std;
int a[15][15];
int main()
{
    int n,j=0; cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    for(int x=0;x<n;x++)
    {
        a[x][j]=1;a[j][x]=1;
    }
    int dd=n-1; j++;
    while(dd!=0){

    int ans=1;   // j la cot
    for(int i=1;i<n;i++){
        ans=ans+a[i][j-1];
        a[i][j]=ans; //cout<<a[i][j]<<" ";
          }
    j++; dd--;
    //cout<<endl;
    }
   cout<<a[n-1][n-1];
    return 0;
}
