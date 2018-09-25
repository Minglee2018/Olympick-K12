#include<bits\stdc++.h>
 using namespace std; 
   int main() 
     {  int vt;
	    string a;
        string b; 
        getline(cin,a);getline(cin,b);
        cin>>vt;
         a.insert(vt,b);
         cout<<endl;
		 cout<<a;
      return 0;
	 }
