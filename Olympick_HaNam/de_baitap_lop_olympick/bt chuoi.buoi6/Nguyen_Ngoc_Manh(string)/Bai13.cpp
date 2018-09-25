//nhap vao 1 xau toan ki tu so, tinh tong cac so do
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int sum=0;
	cin>>a;
	for(int i=0;i<a.length();i++){
		sum+=a[i]-48;
	}
	cout<<sum;
	return 0;
}
