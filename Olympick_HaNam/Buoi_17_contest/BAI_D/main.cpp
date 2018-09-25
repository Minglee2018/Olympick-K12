#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  int n,a[500005];
  cin >> n;
  for (int i=0;i<n;i++) cin >> a[i];
  sort(a,a+n);
  int low=0,high=n/2;
  while (low<=high){
    int mid=(low+high)/2;
    bool check=true;
    for (int i=0,j=n-mid;i<mid;i++,j++){
      if (2*a[i]>a[j]){
        check=false;
        break;
      }
    }
    if (check==true) low=mid+1;
    else high=mid-1;
  }
  cout << n-(low-1);
}
