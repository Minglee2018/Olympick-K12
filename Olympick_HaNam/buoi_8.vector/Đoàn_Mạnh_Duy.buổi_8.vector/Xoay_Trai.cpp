#include<bits\stdc++.h>

using namespace std; 
 int main() 
{
	int n,t;
	vector<int> a;
	 cin>>n>>t;
  for(int i =0;i<n;i++)
  {
  	a.push_back(i+1);
  }	 
	
  for(int i=0;i<t;i++)
  {
  	a.push_back(a[0]);
  	a.erase(a.begin(),a.begin()+1);
  }	
	for(int i=0;i<a.size();i++)
	 cout<<a[i]<<" ";
	return 0;
}
