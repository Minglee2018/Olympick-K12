//ma hoa
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin>>a;
	for(int i=0;i<a.length();i++){
		a[i]=a[i]+1;//dich tien 1 gia tri
		cout<<a[i];
	}
	return 0;
}
