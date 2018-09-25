#include<bits/stdc++.h>
  using namespace std;
    int main () 
     { int k=0,h=0,l=0;
	 
	   string s;
      getline(cin,s);
      for(int i=0;i<s.length();i++)
        {  if(s[i]>='0'&&s[i]<='9')
            k++;
            if(s[i]>='a'&&s[i]<='z')
            h++;
            if(s[i]>='A'&&s[i]<='Z')
            l++;
       	}
        cout<<s.length()<<" "<<k<<" "<<h<<" "<<l;
  
           return 0;	
	 }
