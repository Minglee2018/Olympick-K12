//in 4 chuoi ra theo thu tu trong tu dien
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[4][100], t[100];
   int i, j;
   for (i = 0; i < 4; i++)
       cin>>a[i];

   for (i = 1; i < 4; i++) {
      for (j = 1; j < 4; j++) {
         if (strcmp(a[j - 1], a[j]) > 0) {
            strcpy(t, a[j - 1]);
            strcpy(a[j - 1], a[j]);
            strcpy(a[j], t);
         }
      }
   }
   for (i = 0; i < 4; i++)
      cout<<a[i]<<"   ";
	return 0;
}
