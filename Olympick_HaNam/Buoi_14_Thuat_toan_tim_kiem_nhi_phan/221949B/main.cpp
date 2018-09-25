#include <bits/stdC++.h>

using namespace std;
queue <long long> u; long long n;
long long Lucky(long long val)
{
    if(val*10+4 >n || val*10+7 >n)
       return 0;
    else
        {
           long long t=val*10+4,k=val*10+7;
           u.push(t),u.push(k);
        }
    Lucky(val*10+4);
    Lucky(val*10+7);
}
int main()
{
    vector<long long> a;
    cin>>n;
    Lucky(0);
    cout<<u.size()<<endl;
    while(u.size()!=0)
    {
        a.push_back(u.front());
        u.pop();
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    return 0;
}
