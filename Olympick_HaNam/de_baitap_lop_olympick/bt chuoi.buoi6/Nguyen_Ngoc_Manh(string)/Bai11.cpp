//trong 1 chuoi, chuyen cho vi tri m cho n
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int m,n;
	cin>>a>>m>>n;
	for(int i=0;i<=a.length();i++){
		a[a.length()]=a[m];//dua m xuong cuoi
		a[m]=a[n];         //dua ve vt m
		a[n]=a[a.length()];//dua ve vt n
	}
	cout<<a;
	return 0;
}
