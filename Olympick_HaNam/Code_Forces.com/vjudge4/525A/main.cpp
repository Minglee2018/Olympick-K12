#include <bits/stdc++.h>
#define input           freopen("input.txt", "r", stdin);
#define output           freopen("output.txt", "w", stdout);
using namespace std;

int main()
{
	//input
	//output
	int n,cou=0;
	cin>>n;
	string st;
	cin>>st;
	map<char,int> ma;
	for(int i=0;i<st.length();i++)
	{
		char a=st[i];
		if(i%2==0) ma[a]++;
		else
		{
			//cout<<a+' '<<endl;
			if(ma[a+' ']>0)
			{
				ma[a+' ']--;
				cou++;
			}
		}
	}
	cout<<n-cou-1<<endl;
}
