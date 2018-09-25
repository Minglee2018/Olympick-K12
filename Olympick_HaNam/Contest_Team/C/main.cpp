#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int n; cin >> n;
    map<int,int> m;
    if(n==1&&n==0)
    {
        cout << n << endl;
        return 0;
    }
    for(int i=9;i>=2;i--)
    {
        while(n%i==0)
        {
            m[i]++;
            n/=i;
        }
    }
    if(n!=1)
    {
        cout << -1 << endl;
        return 0;
    }
    string s;
    string s1;
    bool k=true;
    map<int,int>:: iterator it=m.begin();
    for(;it!=m.end();it++)
    {
        for(int i=0; i<(*it).second;i++)
        {
            s+=((*it).first+'0');
            if(s1.length()!=0)
            {
                s=s+s1;
                s1.clear();
            }
        }
    }
    cout << s << endl;
    return 0;
}
