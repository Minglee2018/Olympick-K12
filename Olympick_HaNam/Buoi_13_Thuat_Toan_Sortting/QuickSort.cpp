
#include <bits/stdc++.h>
using namespace std;
int a[100];
void quicksort(int left, int right)
{
    int i=left,j=right;
    int mid=a[(left+right)/2];
    cout<<left<<" "<<right<<" "<<mid<<endl;
    while(i<=j)
    {
        while(a[i]<mid)
            i++;
        while(a[j]>mid)
            j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    if(i<right)
        quicksort(i,right);
    if(j>left)
        quicksort(left,j);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    quicksort(0,n-1);
}
