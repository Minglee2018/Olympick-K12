#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;

int main()
{
    int n, X[N], m = 1e9, a = 0, b = 0, c = 0, x =0, y =0, z =0;
    cin >> n;
    for(int i=0; i<n; ++i)
        scanf("%d", X+i), m = min(m, X[i]);
    for(int i=0; i<n; ++i)
    if(X[i] ==m) ++a;
    else if(X[i] == m+1) ++b;
    else ++c;
    if(!c)
    {cout << n <<endl;
        for(int i=0; i<n; i++)
            cout << X[i]<<" ";
        return 0;
    }
    if(b-b%2>2*min(a, c))
       cout <<n-( b-b%2)<<endl, z = c+b/2, y=b%2, x = a+b/2;
    else
      cout<<n-(2*min(a, c))<<endl,  z = c-min(a, c), y = b+2*min(a, c), x = a-min(a, c);
    for(int i=0; i<x; i++)
        cout << m <<" ";
    for(int i=0; i<y; i++)
        cout << m+1 <<" ";
    for(int i=0; i<z; i++)
        cout << m+2 <<" ";


}
