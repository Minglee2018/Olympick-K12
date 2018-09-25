#include <bits/stdc++.h>
#define maxn 100001
using namespace std;
void Merge(int arr[],int left,int mid, int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int StartIndex=left;
    int AL[n1],AR[n2];
    int k=left;
    for(int i=left;i<=mid;i++)
        AL[i-left]=arr[i];
    for(int i=mid+1;i<=right;i++)
        AR[i-mid-1]=arr[i];
    int i=0,j=0;
    while(i<n1&&j<n2)
    {
        if(AL[i]<AR[j])
        {
            arr[k]=AL[i];
            i++;
        }
        else
        {
            arr[k]=AR[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=AL[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=AR[j];
        j++;
        k++;
    }
}
void MergeSort(int arr[],int left, int right)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        MergeSort(arr,left,mid);
        MergeSort(arr,mid+1,right);
        Merge(arr,left,mid,right);
    }
}
int main()
{
    freopen("in.txt","r",stdin);
    int n,arr[maxn];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    MergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
