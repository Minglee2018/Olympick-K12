#include <bits/stdc++.h>
#define maxn 100001
using namespace std;
void heaptify(int arr[],int n, int MaxIndex)
{
    int left=2*MaxIndex+1;
    int right=2*MaxIndex+2;
    int tmp=MaxIndex;
    if(left<n&&arr[left]>arr[MaxIndex])
    {
        MaxIndex=left;
    }
    if(right<n&&arr[right]>arr[MaxIndex])
    {
        MaxIndex=right;
    }
    if(MaxIndex!=tmp)
    {
        swap(arr[MaxIndex],arr[tmp]);
        heaptify(arr,n,MaxIndex);
    }
}
void HeapSort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
        heaptify(arr,n,i);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heaptify(arr,i,0);
    }
}
int main()
{
    int n,arr[maxn];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    HeapSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
