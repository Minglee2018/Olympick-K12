#include <bits/stdc++.h>
using namespace std;
const int N = 10000;
const int vocung = 1000000;
int n,p,q,c[N][N],kq[N],dem;
bool dadi[N];
void chuyenbi()
{
    kq[1]=p;
    dem=1;
    dadi[p]=true;
}
void ghinhan()
{
    for(int i=1; i<dem; i++){
        cout<<kq[i]<<" -->";
    }
    cout<<kq[dem]<<endl;
}
void Try(int k)
{
    if(k==q){
        ghinhan();
        //exit(0);
        return;
    }
    else
    {
        for(int i=1; i<=n; i++){
            if(c[k][i]<vocung){
                if(dadi[i]==false)
                {
                    kq[++dem]=i;
                    dadi[i]=true;
                    Try(i);
                    dem--;
                    dadi[i]=false;
                }
            }
        }
    }

}
int main()
{
  // freopen("input.txt","w",stdin);
  // freopen("output.txt","w",stdout);
    cin>>n>>p>>q;
    for(int i=1; i<n; i++){
        for(int j=i+1;j<=n; j++){
            cin>>c[i][j];
            if(c[i][j] == -1){
                c[i][j]=vocung;
            }
            c[j][i]=c[i][j];
        }
    }
    c[n][n]=vocung;
    chuyenbi();
    Try(1);
//    for(int i=1; i<=n; i++){
//        for(int j=1; j<=n; j++){
//            cout<<c[i][j]<<" ";
//        }
//        cout<<endl;
//    }
    return 0;
}
