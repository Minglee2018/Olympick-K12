#include<bits/stdc++.h>

using namespace std;
int a[10001];
int main()
{   bool k=true;
    int s=0,demchan=0,demle=0;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
         if(a[i]==1)
            k=false;
    }
   if(k)
    cout<<1;
   else
    cout<<-1;
    return 0;
}
