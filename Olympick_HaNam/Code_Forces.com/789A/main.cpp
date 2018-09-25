#include <bits/stdc++.h>

using namespace std;
vector <int> a;
int main()
{
    long long n,k,dem=0,z=0; cin>>n>>k;
    for(int i=0;i<n;i++){
       int temp; cin>>temp;
       if(temp>2*k) {
             while(true){
                temp=temp-2*k;
                dem++;
                if(temp<2*k) break;
             }
        if(temp>k) dem++;
        else if(temp!=0)
            a.push_back(temp);
        }
        else if(temp==2*k)
            dem++;
        else if(temp < 2*k && temp>k) dem++;

        else
            a.push_back(temp);
    }
    int q=0;
    if(a.size()%2==0)
        q=a.size()/2;
    else
    {
        q=(a.size()-1)/2+1;
    }

    cout<<q+dem;
    return 0;
}




