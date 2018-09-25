#include <bits/stdc++.h>
#define maxn 1000001
using namespace std;
long long a[maxn],b[maxn],n,m;
void qsort(int left,int right)
{
    int i=left,j=right,mid=a[left+rand()%(right-left+1)];
     while(i<j)
    {
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j){
            swap(a[i],a[j]);
            {
                i++,j--;
            }
        }
     }
     if(i < right) qsort(i,right);
     if(j > left )  qsort(left,j);
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        a[i]=b[i]=x;
    }
    qsort(0,n-1);
    for(int t=1;t<n;t++)
     a[t]+=a[t-1],b[t]+=b[t-1];

    cin>>m;
    for(int i=0;i<m;i++)
    {
       long long l,r,x;
       cin>>x>>l>>r;
           if(x==1)
           {
             cout<<b[r-1]-b[l-2]<<endl;
           }
           else
           {
             cout<<a[r-1]-a[l-2]<<endl;
           }
    }

    return 0;
}
