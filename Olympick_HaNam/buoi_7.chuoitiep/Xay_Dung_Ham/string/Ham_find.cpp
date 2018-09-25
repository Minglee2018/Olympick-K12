#include<bits\stdc++.h>
bool chek=false;
using namespace std; 
 int main() 
  { string s,a; 
    int n,i;
    getline(cin,s);
    getline(cin,a);
	cin>>n;
	int k=0,vt=-1;
	for(i=n;i<s.length();i++){
		if(a[k]==s[i] && a.length()==1){
			vt=i;break;
		}else{
		if(a[k]==s[i]){
			vt=i;k++;
		} 
		if(a[k]=='\0')
			break;
		}
		
	}
	 cout<<vt-a.length()+1;
    
 return 0;  
  }
