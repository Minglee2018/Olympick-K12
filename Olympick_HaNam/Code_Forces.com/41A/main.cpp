#include <bits\stdc++.h>
#define maxn 1001
using namespace std;

int main()
{
   bool isoke =true;
   char s[maxn],a[maxn],b[maxn];
   gets(s);
   gets(a);
   int j=0;
   for(int i=strlen(s)-1;i>=0;i--)
   {
       b[j++]=s[i];
   }

    for(int i=0;i<strlen(a);i++)
        {
            if(a[i]!=b[i]) isoke =false;
        }
         if( isoke)
       cout<<"YES";
       else
      cout<<"NO";
    return 0;
}
