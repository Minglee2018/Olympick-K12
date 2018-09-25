#include <bits/stdc++.h>

using namespace std;
long long res[3],b[3],Max_am=-1e9,Min_am,Max_d,Min_d=1e9,n;
int main(){
    cin>>n; for(int i=0;i<3;i++) cin>>b[i];
    sort(b,b+3);
    bool kd=false,ka=false;
    for(int i=0;i<n;i++){
       long long temp; cin>>temp;
        if(temp>=0){ kd=true;
           Max_d=max(Max_d,temp);
           Min_d=min(Min_d,temp);
        }
        if(temp<0){ ka=true;
           Max_am=max(Max_am,temp);
           Min_am=min(Min_am,temp);
        }
    }
    for(int i=0;i<3;i++){
            if(b[i]>=0){
            if(kd==true && ka==false)
                res[i]=b[i]*Max_d;
            else if(ka==true && kd==false)
                res[i]=b[i]*Min_am;
               else
                res[i]=b[i]*Max_d;
        }else if(b[i]<0){
            if(kd==true && ka==false)
                res[i]=b[i]*Min_d;
            else if(ka==true && kd==false)
                res[i]=b[i]*Min_am;
               else
                res[i]=b[i]*Min_am;
        }
    }
    long long ans=0;
    for(int i=0;i<3;i++){
        cout<<res[i]<<" ";
    }

    return 0;
}
