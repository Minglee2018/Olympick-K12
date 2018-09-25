//nhap 1 chuoi, xoa ki tu x?
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	char x;
	cin>>a>>x;
	for(int i=0;i<=a.length();i++){
		if(a[i]!=x){
			cout<<a[i];
		}
	}
	return 0;
}
