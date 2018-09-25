#include <bits/stdc++.h>

using namespace std;
int a,b;
int main()
{
    cin>>a>>b;
    int z=abs(a-b);

    if(z==1) {
        cout<<1; return 0;
    }
    else if(z%2==0){
            int i=z/2;
        int ans=(i+1)*(i);
        cout<<ans; return 0;
    }
    else {
    int i=z/2;
    int ans =(i+1)*i+i+1;
    cout<<ans;
    }

    return 0;
}
