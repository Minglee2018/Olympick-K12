#include <iostream>
#include <math.h>

using namespace std;

int main(){
  long long n,k;
  cin >> n >> k;
  long long a[200],b[200],c[200];
  for (int i=0;i<n;i++) cin >> a[i];
  for (int i=0;i<n;i++) cin >> b[i];
  c[n-1]=b[n-1];
  int max=-1,vt=0;
  for (int i=n-2;i>=0;i--){
    max=-1;
    vt=0;
    for (int j=n-1;j>=i;j--){
      if (abs(a[j]-a[i])>=k && c[j]>max){
        max=c[j];
        vt=j;
      }
    }
    if (vt!=0) c[i]=c[vt]+b[i];
    else c[i]=b[i];
  }
  max=-1;
  for (int i=0;i<n;i++){
    if (c[i]>max) max=c[i];
  }
  cout << max;
  return 0;
}
close
