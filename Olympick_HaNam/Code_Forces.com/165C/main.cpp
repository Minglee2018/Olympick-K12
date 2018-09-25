#include <bits/stdc++.h>
using namespace std;
long long k , ans , t , dp[1111111];
string a;
int main(){
	dp[0] = 1;
	cin >> k >> a;
	for(int i = 0 ; i < a.size() ; i++){
		if(a[i] == '1'){ t ++;}
		if(t >= k) ans += dp[t-k]; //cout<<ans<<"-"<<t-k<<" ";}
		dp[t] ++;
	}
 //for(int i=0;i<t;i++){
 //   cout<<dp[i]<<" ";
//}
	cout << ans;
	return 0;
}
