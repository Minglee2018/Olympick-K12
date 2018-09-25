#include <bits/stdc++.h>

using namespace std;
long long n;
double res1,res2,res3,Max_am=-1e9,Min_am,Max_d,Min_d=1e9;
long long b[4];
int main(){
    cin>>n; for(int i=0;i<3;i++) cin>>b[i];
    sort(b,b+3);
    bool kd=false,ka=false;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=0){ kd=true;
            if(Max_d<a[i]) Max_d=a[i];
            if(Min_d>a[i]) Min_d=a[i];
        }
        if(a[i]<0){ ka=true;
            if(Max_am<a[i]) Max_am=a[i];
            if(Min_am>a[i]) Min_am=a[i];
        }
    }
    if(b[0]>=0){    //xét phần tử P
            if(kd==true && ka==false){
                res1=b[0]*Max_d;
            }
            else if(ka==true && kd==false){
                res1=b[0]*Min_am;
            }
            else if(ka==true && kd==true){
                res1=b[0]*Max_d;
            }
    } else if(b[0]<0){
            if(kd==true && ka==false){
                res1=b[0]*Min_d;
            } else if(ka==true && kd==false){
              res1=b[0]*Min_am;
            }
            else if(ka==true && kd==true){
                res1=b[0]*Min_am;
            }
    }
     if(b[1]>0){          //xét phần tử thứ Q
            if(kd==true && ka==false){
                res2=b[1]*Max_d;
            }
            else if(ka==true && kd==false){
                res2=b[1]*Max_am;
            }
            else if(ka==true && kd==true){
                res2=b[1]*Max_d;
            }
    } else if(b[1]<0){
            if(kd==true && ka==false){
                res2=b[1]*Min_d;
            } else if(ka==true && kd==false){
              res2=b[1]*Min_am;
            }
            else if(ka==true && kd==true){
                res2=b[1]*Min_am;
            }
    }
    if(b[2]>0){          //xét phần tử thứ R
            if(kd==true && ka==false){
                res3=b[2]*Max_d;
            }
            else if(ka==true && kd==false){
                res3=b[2]*Max_am;
            }
            else if(ka==true && kd==true){
                res3=b[2]*Max_d;
            }
    } else if(b[2]<0){
            if(kd==true && ka==false){
                res3=b[2]*Min_d;
            } else if(ka==true && kd==false){
              res3=b[2]*Min_am;
            }
            else if(ka==true && kd==true){
                res3=b[2]*Min_am;
            }
    }
      cout<<res1+res2+res3;
    return 0;
}
