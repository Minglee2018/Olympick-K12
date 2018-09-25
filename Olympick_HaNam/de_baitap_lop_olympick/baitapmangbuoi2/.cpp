#include<bits/stdc++.h>
#define lmao 9999
 using namespace std;
 int a[lmao],i=0; 
  void fibonaci(int x,int y,int z)
   {          long kq=0;
            if(x>0)
       {   kq=y+z; a[i]=kq;i++;
          fibonaci(x-1,z,kq);
	   }
           
   } 
int main (void)
      { int n;
          cin>>n;
            fibonaci(n,1,0);
              cout<<"mang a"<<endl;
                for(i=0;i<n;i++)
                  cout<<a[i]<<" ";
	  }
