#include <bits/stdc++.h>

using namespace std;
int Compare(string a,string b)
{
    if(a>b)
        return 1;
    else if(a<b)
        return -1;
    return 0;
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<Compare(a,b);
    return 0;
}
