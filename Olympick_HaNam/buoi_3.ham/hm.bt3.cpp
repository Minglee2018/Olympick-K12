#include<bits/stdc++.h>
  using namespace std;
   int So_Luong(long long n)
    {  long long i=10;
	double r=0;
        int dem=0;
    	while (n!=r){
    	 	 r=n%i;
    		 i=i*10;
    		 dem++;
		}     return dem;
	}
    
    int main() 
    { 
     double x;
    cin>>x;
	 
     cout<< So_Luong(x);
        return 0;
	}
    
     
      
