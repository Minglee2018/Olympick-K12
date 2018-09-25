#include <bits\stdc++.h>

using namespace std;

int main()
{
    set <string> M;
    string ten;
    string b[1001],c;
    int n,j=0,t;   cin>>n;
    for( int i=0;i<n;i++){
     cin>>ten;
    int solan=49;
    t=M.size();
    M.insert(ten);
   if(M.size()==t)
   {
        while(M.size()==t){
           ten+=solan++;
           M.insert(ten);
        }
        b[j++]=ten;
   }
   else
   {
       b[j++]="OKE";
   }
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }

    return 0;
}
