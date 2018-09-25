//in ra so lan xuat hien tung ki tu
#include<bits/stdc++.h>
using namespace std;
int main()
{
 char s[100];
 cin>>s;
 int dem;
 for(int i='A';i<='z';i++)
  {
   dem=0;
   for(int j=0;j<strlen(s);j++)
   if(s[j]==i) dem++;
   if(dem!=0) printf("%c : %d \n",i,dem);
  }
return 0;
}
