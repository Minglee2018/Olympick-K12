#include<bits/stdc++.h>
 using namespace std;
    int main()  
     { int n;
       cin>>n;
        int i=2;
        cout<<1;
        while(n!=1)
         { 
           while(n%i==0)
             { cout<<"*"<<i;
                n/=i;
			 }
			 i++;
		 }
     	 return 0;
	 }

