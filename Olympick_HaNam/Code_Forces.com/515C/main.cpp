#include<bits\stdc++.h>

using namespace std;
vector <int> u,v,w;
    int GT(int x)
    {
        int ans=1;
        for(int i=1;i<=x;i++)
        ans *=i; return ans;
    }

int main()
{   int k,r=1,t;   cin>>t;
    long long n;   cin>>n;
    while(n!=0)
    {
        k=n%10;
        n=n/10;
        if(k!=1 && k!=0)
        u.push_back(k);
    }
  for(int j=0;j<u.size();j++){
    sort(u.begin(),u.end());
  }
  for(int i=0;i<u.size();i++)
    w.push_back(u[i]);
  int max=u[u.size()-1];
  for(int i=u.size()-1;i>=0;i--)
  {
     if(max== u[i]){
         u.pop_back();
         r=r*GT(max);
     }
  }
  if(u.size()==0){
    for(int i=0;i<w.size();i++)
    cout<<w[i];
  }
  else
    {
  for(int i=u.size()-1;i>=0;i--)
    v.push_back(u[i]);

    for(int j=u.size()

        -1;j>=0;j--){
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

     }
    return 0;
}
