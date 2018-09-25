#include <bits/stdc++.h>
using namespace std;
#define e 10e-20
float x[10101010],a,k=10000;
int main (void)
{
    cin>>a;
    x[0]=a;
    int i=1;
    while (k>=e)
    {
        x[i]=(float)(x[i-1]*x[i-1]+a)/(2*x[i-1]);
        k=(float)abs((x[i-1]-x[i])/(x[i])),i++;

    }
    cout<<x[i-1];
 	 return 0;
 }
