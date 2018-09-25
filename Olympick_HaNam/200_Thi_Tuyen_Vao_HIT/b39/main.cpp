#include <bits/stdc++.h>
using namespace std;
int a[1010101],n;
void SORT(int left,int right,int k)
{
        int l=left,r=right,m=(l+r)/2;
        while(l<=r)
        {
           if(k)
           {
                while(a[l]<a[m]) l++;
                while(a[m]<a[r]) r--;
           }
           else
           {
                while(a[l]>a[m]) l++;
                while(a[m]>a[r]) r--;
           }
            if(l<=r)
                swap (a[l],a[r]),l++,r--;
        }
        if(l<right) SORT(l,right,k);
        if(r>left) SORT(left,r,k);
}

int main()
{
    int i=0;
    for(cin>>n,i=0;i<n; i++) cin>>a[i];
    SORT(0,n-1,true);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    SORT(0,n-1,false);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}
