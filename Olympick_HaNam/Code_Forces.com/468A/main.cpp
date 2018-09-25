#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k=5; cin>>n;
    if(n<4)
    {
     cout<<"NO";
     return 0;
    }
    else  n--;
    cout<<"YES"<<endl;
    if(n%2==0){
            cout<<5<<" - "<<3<<" = "<<2<<endl;
            cout<<2<<" * "<<4<<" = "<<8<<endl;
            cout<<1<<" + "<<2<<" = "<<3<<endl;
            cout<<8<<" * "<<3<<" = "<<24<<endl;n-=4;
            while(n!=0){ cout<<k+2<<" - "<<k+1<<" = "<<1<<endl;
                         cout<<24<<" * "<<1<<" = " <<24<<endl;
                         n-=2,k+=2;
               }
     }
    else {
        cout<<3<<" * "<<4<<" = "<<12<<endl;
        cout<<2<<" * "<<1<<" = "<<2<<endl;
        cout<<12<<" * "<<2<<" = "<<24<<endl;
        while(n>3){ cout<<n+1<<" - "<<n<<" = "<<1<<endl;
                    cout<<24<<" * "<<1<<" = "<<24<<endl;
                      n-=2;
        }
    }
    return 0;
}
