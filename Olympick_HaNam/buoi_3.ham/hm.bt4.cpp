#include<bits\stdc++.h>

using namespace std;
vector <int> b;
    int GT(int x)
    {
        int ans=1;
        for(int i=1;i<=x;i++)
        ans *=i; return ans;
    }
    
int main()
{   int k=0,r=0,t; cin>>t;
    long long n;   cin>>n;
    vector <int> u,v;
    while(true){
        k=n%10;
        if(k!=1 && k!=0)
        u.push_back(k);

        n=n/10;
        if(n==0) break;
    }
  for(int j=0;j<u.size();j++){
    sort(u.begin(),u.end());
  }
  r=u[u.size()-1];
  r=GT(r);
  u.pop_back();
  for(int i=u.size()-1;i>=0;i--)
    v.push_back(u[i]);

    for(int j=u.size()-1;j>=0;j--){
       if(r%GT(u[j])==0)
        while(true)
        {
            v.push_back(u[j]);
            r=r/GT(u[j]);
            if(r%GT(u[j])!=0)break;
        }

    }

for(int j=0;j<v.size();j++)
    sort(v.begin(),v.end());
  for(int i=v.size()-1;i>=0;i--)
    cout<<v[i]; 
    return 0;
}

