#include <bits/stdc++.h>
using namespace std;
pair <string,int> a[20];char x[10];int result,k;
int main()
{
    a[1].first="January";
    a[2].first="February";
    a[3].first="March";
    a[4].first="April";
    a[5].first="May";
    a[6].first="June";
    a[7].first="July";
    a[8].first="August";
    a[9].first="September";
    a[10].first="October";
    a[11].first="November";
    a[12].first="December";
    cin>>x>>k; k%=12;
    for(int i=1;i<=12; i++)
    {
        if(a[i].first==x)
            result=i;

    }
    if(k==0) cout<<x;
    else
    {
        int z=min(k+result-12,k);
        if(z<=0) z=max(z,k+result);
        cout<<a[z].first;

    }
    return 0;
}
