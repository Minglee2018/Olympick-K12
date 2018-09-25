#include<bits/stdc++.h>
 using namespace std;
  void Tong(int x) 
    {   int s=0,s1=1; 
	for(int i=2;i<=x;i++)
	   { if(x%i==0&&i%2==0)
	    s+=i;
	    else if(x%i==0&&i%2!=0)
	    s1+=i;
	     
		} 
		cout<< s<<" "<<s1; 
		}
	int main(void)
	 {  int n;
	 cin>>n;
	  Tong(n);
	  return 0;
	 	 
	 }
