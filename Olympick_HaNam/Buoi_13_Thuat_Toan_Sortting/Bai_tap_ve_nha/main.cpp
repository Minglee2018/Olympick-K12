#include <bits/stdc++.h>
#define maxn 1000001
using namespace std;
long long a[maxn],k,n,m,j;
void Merge(long long arr[],int left,int mid,int right)
{
    long long n1=mid-left+1,n2=right-mid,startindex=left,AL[n1],AR[n2],k=left;
    for(int i=left; i<=mid; i++)
    {
        AL[i-left]=arr[i];
    }
    for(int i=mid+1; i<=right; i++)
    {
        AR[i-mid-1]=arr[i];
    }
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(AL[i]<AR[j])
            arr[k]=AL[i],i++;
        else
            arr[k]=AR[j],j++;
            k++;
    }
    while(i<n1)
    {
        arr[k]=AL[i],i++,k++;
    }
    while(j<n2)
    {
        arr[k]= AR[j],j++,k++;
    }
}
void  MergeSort(long long arr[],int left,int right)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        MergeSort(arr, left, mid);
        MergeSort(arr,mid+1, right);
        Merge(arr,left,mid,right);
    }
}
int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long b[n*m];
    for(int i=0;i<m;i++)
    {
        int x; cin>>x;
        for(int d=0; d<n; d++)
        {
            b[j++]=x+a[d];
        }

    }
    MergeSort(b,0,j-1);
    for(long long q=0;q<k;q++)
    {
        cout<<b[q]<<" ";
    }

    return 0;
}
