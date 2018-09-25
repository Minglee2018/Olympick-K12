#include <bits/stdc++.h>

using namespace std;
long long x,y,z;
int main()
{
     cin>>x>>y;  z=abs(x)+abs(y);
     if(x<=0 && y>=0) cout<<-z<<" "<<0<<" "<<0<<" "<<z;
     else if(x>=0 && y>=0) cout<<0<<" "<<z<<" "<<z<<" "<<0;
     else if(x>=0 && y<=0) cout<<0<<" "<<-z<<" "<<z<<" "<<0;
     else if(x<=0 && y<=0) cout<<-z<<" "<<0<<" "<<0<<" "<<-z;

    return 0;
}
