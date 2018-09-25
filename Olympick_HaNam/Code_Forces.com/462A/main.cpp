#include <bits/stdc++.h>
bool isoke=true;
using namespace std;
 string a[1001];
int main()
{
    int n; cin>>n;
    for(int i=0;i<n;i++){
            cin>> a[i];
    }

        if(n>2 && n%2!=0){
               for(int i=0;i<n/2;i++){
               if(a[n/2][i]!=a[n/2][n-i-1])
               isoke=false;
           }
        }
         int j=0;

        while(j!=n/2)
             {
                 for(int i=0;i<n;i++){
                   if(a[j][i]!=a[n-j-1][n-i-1]){
                    isoke=false;
                    }
                 }
               j++;
             }


        if(isoke)
        cout<< "YES";
        else
            cout<<"NO";
    return 0;
}
