#include<bits\stdc++.h> 
using namespace std; 
 int main() 
  { int i,j; 
    string s; 
    getline(cin,s);
    for(j=0;j<s.length();j++){
	for(i=0;i<s.length();i++){
    	if(s[i]==s[i+1])
    	s.erase(i,2);
	}}
	for(i=0;i<s.length();i++)
	if(s[i]==s[i+1])
	s.erase(i,2);
    if(s.length()==0)
    cout<<"Empty string"<<endl;
    else 
    cout<<s;

     return 0;
  }
