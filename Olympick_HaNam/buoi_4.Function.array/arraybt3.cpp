#include<bits/stdc++.h>
#define maxn 10001
 using namespace std;
 int n;
 bool Number_of_Uoc(int x)
    { if(x==0)
	  return false; 
	  if(n%x==0)
	  return true;
	  else
	  return false; 
   	}
 
  int main()
     {  int a[maxn],i; 
       cin>>n;
       int dem_uoc=0;
      for( i=1;i<=n;i++) 
       { cin>>a[i];
        if(Number_of_Uoc(a[i])==true)
        dem_uoc++;
	   }
	   cout<<dem_uoc;
      return 0;
	 }
