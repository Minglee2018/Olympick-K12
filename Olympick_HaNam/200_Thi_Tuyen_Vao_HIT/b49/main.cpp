#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cout <<" nhap m va n ";
    cin>>m>>n;
    int gt,hang,cot,vthang,vtcot,a[m][n];
    hang=m,cot=n;
    vthang=vtcot=0;
    gt=1;
    while(gt<=n*m)
    {
        for(int i=vtcot; i<cot;i++){
            a[vthang][i]=gt++;
            //cout<<vthang<<"-"<<i<<" ";
        }
        for(int i=vthang+1; i<hang; i++){
            a[i][cot-1]=gt++;
           // cout<<i<<"-"<<cot-1<<" ";
        }
        for(int i=cot-2; i>=vtcot; i--){
            a[hang-1][i]=gt++;
            //cout<<hang-1<<"-"<<i<<" ";
        }
        for(int i=hang-2; i>vthang; i--){
            a[i][vtcot]=gt++;
            //cout<<i<<"-"<<vtcot<<" ";
        }
        //cout<<" "<<"endl -while"<<endl;
        vthang++,vtcot++,hang--,cot--;
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<setw(7)<<
            a[i][j]<<setw(7);
        }
        cout<<endl;
    }
    return 0;
}
