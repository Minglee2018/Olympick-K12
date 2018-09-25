//tim vi tri chung cua 2 chuoi
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.length();i++){
		for(int j=0;j<b.length();i++){
			if(a[i]==b[j]){
				cout<<i<<"   "<<j;
			}
		}
	}

	return 0;
}
