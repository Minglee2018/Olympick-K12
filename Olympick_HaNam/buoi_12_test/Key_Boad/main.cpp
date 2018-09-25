#include <bits/stdc++.h>

using namespace std;
string a,b,c,res;
int main()
{
    cin>>a>>b>>c;
    for(int i=0;i<c.length();i++){
        char temp=c[i];
        if(c[i]>='A' && c[i]<= 'Z'){
            temp+=32;
        }

        if(temp>='a' && temp<='z'){
            res += b[a.find(temp,0)];
        }
        else{
           res +=temp;
        }
    }
    for(int i=0;i<c.length();i++){
        if(c[i]>='A' && c[i] <='Z')
        {
            res[i]-=32;
        }
    }
    cout<<endl<<res;
    return 0;
}
