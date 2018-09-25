#include <bits/stdc++.h>
using namespace std;
int cnt[3];
int main(){
	int n,vmin=1e9,vmax=-1e9;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;++i){
		cin>>v[i];
		int x =v[i];
		vmin=min(x,vmin);
		vmax=max(x,vmax);
	}
	if(vmax-vmin<2){
		cout<<n<<endl;
		for(int i=0;i<n;++i)
			cout<<v[i]<<" ";
		return 0;
	}
	for(int i=0;i<n;++i){
		int x =v[i];
		x-=vmin;
		cnt[x]++;
	}
	int dif = cnt[0]-cnt[2];
	int ans=0,best=1e9;
	for(int i=0;i<=n;++i){
		int a=i;
		int c=i-dif;
		int b=n-(a+c);
		if(a>=0&&b>=0&&c>=0){
			int cur=min(a,cnt[0])+min(b,cnt[1])+min(c,cnt[2]);
			if(cur<best){
				best=cur;
				ans=i;
			}
		}
	}
	cout<<best<<endl;
	for(int i=0;i<ans;++i)
		cout<<vmin<<" ";
	for(int i=0;i<n-(2*ans-dif);++i)
		cout<<vmin+1<<" ";
	for(int i=0;i<ans-dif;++i)
		cout<<vmin+2<<" ";

}
