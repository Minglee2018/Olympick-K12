//dem so ptu trong chuoi, (so, thuong, Hoa)
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin>>a;
	cout<<a.length()<<endl; //do dai chuoi
//ASCII: Cac so 0=>9 ma 48=>57
//chu cai thuong a=>z ma 97=>122
// chu Hoa A=>Z ma 65=>90
    int so, thuong, hoa;
    for(int i=0;i<=a.length();i++){
    	if(a[i]>=48&&a[i]<=57){
    		so++;
		}
		else if(a[i]>=97&&a[i]<=122){
			thuong++;
		}
		else if(a[i]>=65&&a[i]<=90){
			hoa++;
		}
	}
	cout<<so<<"   "<<thuong<<"   "<<hoa;
	return 0;
}
