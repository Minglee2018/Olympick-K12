#include<bits\stdc++.h>
using namespace std;
int main () 
{  
    int n,d;
    vector <int> a[1001],b[1001];
    cin>>n;
    
  for(int j=0;j<n;j++)
  {
	  for(int i=0;i<n;i++)
	  {
	   cin>>d;
	   a[j].push_back(d);
	  }
  }
    
  for(int j=0;j<n;j++)
  {
  	for(int i=0;i<n;i++)
  	  {
  	  	cin>>d;
  	  
  	  	b[j].push_back(a[j][i]+d);
	  }	
  }  
  
  for(int i=0;i<n;i++){
  	  for(int j=0;j<n;j++){
  	  	cout<<b[i][j]<<" ";
	    }
	    cout<<endl;
  }    
  
   return 0;
}
