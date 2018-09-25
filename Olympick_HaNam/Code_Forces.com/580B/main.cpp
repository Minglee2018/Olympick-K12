#include<bits/stdc++.h>
using namespace std;
 long long n,d,j,ans,s;
 pair<long long,long long> a[1000001];
 bool compare ( pair <int,int> a,pair <int,int> b)
 {
     if(a.first < b.first)
        return true;
     else
        return false;
 }
 int main()
 {

    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin >> a[i].first >> a[i].second;
    }
     sort(a,a+n,compare);
     /*cout<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<a[i].first<<" "<<a[i].second<<endl;
     }
     */
     ans=j=s=0;
     for(int k=0; k<n; k++)
     {
         s+=a[k].second; //cout<<endl<<s<<endl;
         while(a[k].first-a[j].first >= d)
         {
             s-=a[j++].second; //cout<<s<<"|+|";
         }
         ans=max(ans,s);
     }
     cout<<ans;
     return 0;
 }
