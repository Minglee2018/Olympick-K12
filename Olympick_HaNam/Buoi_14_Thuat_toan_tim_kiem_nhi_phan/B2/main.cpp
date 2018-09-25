#include <bits/stdc++.h>

using namespace std;
int D,N,A[1234],M = 0;

int kiemTra(int dt){
    int ht = dt;
    int dem = 1;
    for(int i = 0; i< N; ++i){
        if(ht - A[i] >= 0){
            ht -= A[i];
        }else{
            if(dt - A[i] < 0){
                return -1;
            }
            ht = dt - A[i];
            dem++;
        }
    }

    if(dem <= D){
        return 1;
    }else{
        return -1;
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    int test; cin>> test;
    for(int t = 0; t< test; ++t){
        cin>> N>>D;
        unsigned long long sum = 0;
        for(int i = 0; i< N; ++i){
            cin>> A[i];
            sum+= A[i];
            if(A[i] > M)
                M = A[i];
        }
        int left = 1, right  = sum;
        while(left<= right){

            int mid = (left + right) / 2;
        //cout<< mid<<endl;
            if(kiemTra(mid) == 1){
                right = mid - 1;
            }else{
                left = mid  + 1;
            }
        }
        cout<<"Case "<<t+1<<": "<<left<<endl;
    }
    return 0;
}
