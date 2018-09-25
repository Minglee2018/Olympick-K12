#include <bits/stdc++.h>

using namespace std;
int a[26]={0,1 ,2, 4, 8 ,16, 23, 46, 29, 58, 116, 223, 446, 289, 578, 1156, 1223, 2446, 2489, 4789, 5789, 11578,12356, 12247, 24449};
long long b[7]={48889, 77789, 155578, 111356, 122227, 244445};

int main()
{
    long long n,z=1,k;
    //freopen("output.txt","w",stdout);
    cin>>n;
    if(n<=24){
        cout<<a[n];
    }else
    {
        n-=24;
        while(n>=6){
            n=n-6;
        }
        if(n==0){
            cout<<b[5];
            return 0;
        }
        cout<<b[n-1];
    }

    return 0;
}
