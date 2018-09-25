#include <bits/stdc++.h>
#define maxn 10001
#define e 0.00001
using namespace std;
int main()
{
    double a,x[maxn];
    cin>>a;
    x[0]=a;
    int i=0;
    do
    {
        i++;
        x[i]=(x[i-1]*x[i-1]+a)/(2*x[i-1]);
    }
    while(abs((x[i-1]-x[i])/x[i])>=e);
    cout<<x[i];
}
