#include<bits\stdc++.h>
#include<string.h>
using namespace std;
int main() {
   char s[4][20], t[20];
   int i, j;
   for (i = 0; i < 4; i++)
      gets(s[i]);
for (i = 1; i < 4; i++) {
      for (j = 1; j < 4; j++) {
         if (strcmp(s[j - 1], s[j]) > 0) {
            strcpy(t, s[j - 1]);
            strcpy(s[j - 1], s[j]);
            strcpy(s[j], t);
         }
      }
   }
 cout<<endl;
   for (i = 0; i < 4; i++)
      puts(s[i]);
  return 0;
}
