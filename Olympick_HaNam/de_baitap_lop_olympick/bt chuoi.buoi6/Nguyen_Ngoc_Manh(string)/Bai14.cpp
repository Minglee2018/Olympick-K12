//kiem tra chuoi doi xung?
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin>>a;
	int m=a.length()-1, kq;
    for(int i=0;i<(m/2);i++)
    {
        for(m; m >(m/2) ; m--)
        {
            if(a[i]=a[m])
                kq=1;
            else
                kq=0;              
        }
    }
    if(kq==1)
        cout<<"YES";
    else
        cout<<"NO";
	return 0;
}
