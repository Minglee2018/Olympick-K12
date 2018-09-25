#include<bits/stdc++.h>
  using namespace std;
int S(int x)
   {  int k=0;
     for(int i=1;i<=x;i++)
              k+=i;
              return k;
   }
    int main() 
     {  int i,u=0; 
	unsigned int n;
     
       cin>>n;
    
for(i=n-1;i>=1;i--)
   { if(S(i)<n) 
    break;
    	
   }

      cout<<"so nguyen duong lon nhat la:"<<i;
        return 0;
	}
    
     
