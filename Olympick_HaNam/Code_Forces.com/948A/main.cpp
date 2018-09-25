#include <bits/stdc++.h>

using namespace std;

char s[520][520]; int r,c;
bool invoker (int i,int j)
{
    int k1=0,k2=0,k3=0,k4=0;
       if(i-1<0) k1=i;
          else k1=i-1;
       if(i+1>r) k2=i;
          else k2=i+1;
       if(j-1<0) k3=j;
          else k3=j-1;
       if(j+1>c) k4=j;
          else k4=j+1;
       if(s[k1][j]=='W' || s[k2][j]=='W' || s[i][k3]=='W' || s[i][k4]=='W')
          return 1;
   return 0;
}
int main()
{
        cin>>r>>c;
    for(int i=0;i<r;i++)
        cin>>s[i];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
                if(s[i][j]=='S' && invoker(i,j)==1){
                    cout<<"No";
                    return 0;
                }
            if(s[i][j]=='.'){
                s[i][j]='D';
            }
        }
    }
    cout<<"Yes"<<endl;
    for(int i=0;i<r;i++)
        cout<<s[i]<<endl;
    return 0;
}
