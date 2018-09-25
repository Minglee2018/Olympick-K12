# include <iostream>
using namespace std;
long long a,b,k;
int main()
{
	cin>>k>>a>>b;
	cout<<((b-(b%k+k)%k)-(a+(k-a%k)%k))/k+1;
	return 0;
}
