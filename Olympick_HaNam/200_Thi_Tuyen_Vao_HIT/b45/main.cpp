#include <bits/stdc++.h>

using namespace std;
int a[10000],n;
 void Qsort(int left,int right)
 {
     int l=left,r=right,m=(l+r)/2;
     while(l<=r)
     {
         while(a[l]<a[m]) l++;
         while(a[r]>a[m]) r--;
         if(l<=r)
            swap(a[l],a[r]),l++,r--;
     }
     if(l<right)    Qsort(l,right);
     if(r>left)     Qsort(left,r);
 }
int main()
{
    int n,i;
    for(cin>>n,i=0; i<n; i++) cin>>a[i];
    Qsort(0,n-1);
    if(a[0]==a[n-1])
        return cout<<"khong ton tai y/c cua bai toan
        "<<endl,0;
    else
    {
        cout<<"Max1: "<<a[n-1]<<endl;
        cout<<" Min1: "<<a[0]<<endl;
        int d=a[n-2],z=a[1];
        for(int i=n-2; i>=0; i--)
        {
            if(d<a[i]){
                d=a[i];
                break;
            }
        }
        for(int i=1; i<n-2; i++)
        {
            if(a[i]>z){
                 z=a[i];
                 break;
            }
        }
        if(d<z) cout<<"Khong ton tai Max va Min lon va nho thu 2";
        else if(d==z) cout<<"Max2 = Min2 = "<<d;
        else
        {
            cout<<"Max2 = "<<d<<endl<<"Min2 = "<<z;
        }
    }
    return 0;
}
