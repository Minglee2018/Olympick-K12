#include <iostream>
using namespace std;

int main(void){
  int i,j=0,k=0,x=0,y=0,tg,n,a[99999],b[99999],c[99999]; //Fixed: Set x,y=0
  cin >> n;
  for (i=1;i<=n;i++){
    cin >> a[i];
    //Tach mang
    if (a[i]<0)
    {
      j++;
      b[j]=a[i];
      x=j;
    }
    else
    {
      k++;
      c[k]=a[i];
      y=k;
    }
  }
  //Sap xep so am
  for (j=x;j>=2;j--){
    for (i=1;i<=j-1;i++){
      if (b[i]>b[i+1])
      {
        tg=b[i];
        b[i]=b[i+1];
        b[i+1]=tg;
      }
    }
  }
  //Sap xep so duong
  for (j=y;j>=2;j--){
    for (i=1;i<=j-1;i++){
      if (c[i]<c[i+
	  1])
      {
        tg=c[i];
        c[i]=c[i+1];
        c[i+1]=tg;
      }
    }
  }
  //In ra
  for (j=1;j<=x;j++){
    cout << b[j] << "  ";
  }
  for (k=1;k<=y;k++){
    cout << c[k] << "  ";
  }
  cout << "\n";
}
