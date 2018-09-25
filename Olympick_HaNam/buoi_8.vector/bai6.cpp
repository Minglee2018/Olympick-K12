#include <bits\stdc++.h>

using namespace std;
vector<int> a;
int main()
{
    int n,m,t=-1; cin>>n>>m;
    for(int i=0;i<n;i++)
        a.push_back(i+1);
    while(t<0){
	t=m-a.size();
        for(int i=0;i<m-1;i++){
            a.push_back(a[0]);
            a.erase(a.begin(),a.begin()+1);
        }
        cout<<a[0]<<" ";
        a.erase(a.begin(),a.begin()+1);
    }
    if(a.size()==0)
        return 0;
    while(a.size()!=1){
        t=m-a.size();
        while(t>a.size()){
            t-=a.size();
        }
        cout<<a[t-1]<<" ";
        for(int i=0;i<t-1;i++)
        {
            a.push_back(a[0]);
            a.erase(a.begin(),a.begin()+1);
        }
        a.erase(a.begin(),a.begin()+1);
    }
    cout<<a[0];
    return 0;
}
