#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{   cin>>n;
    if(n>36) {cout<<-1;return 0;}
    else while(n>1){cout<<8,n-=2;}
    if(n)cout<<6;
}
