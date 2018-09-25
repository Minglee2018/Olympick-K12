#include<bits/stdc++.h>
 using namespace std;
 double Giai_Thua( int x) 
  { if(x<2)
  return 1; 
  else 
   return (x*Giai_Thua(x-1));
  }
	
	int main()
	 {  int n;
	  double s=0;
	 cin>>n;
	for(int i=1;i<=n;i++)
	{
		 s+=Giai_Thua(i);
	}  
	cout<<"tong giai thua la:"<<s;
	  return 0;
	 	 
	 }
