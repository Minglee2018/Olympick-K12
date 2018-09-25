#include<bits\stdc++.h>
 using namespace std;
  vector <int> a;
int main() 
{ 
   int n,m,x=-1; 
   cin>>n>>m;    
 
   for(int i=0;i<n;i++)
      a.push_back(i+1);   	
   if(m==0){
      {
   	  for(int i=0;i<n;i++)
   	      cout<<a[i]<<" ";
      }
      return 0; 
   }
        
   while(x<0)
   {
   	  x=m-a.size();
   	  for(int i=0;i<m-1;i++)
   	  {
   	  	a.push_back(a[0]);
   	  	a.erase(a.begin(),a.begin()+1);
	  }
   	 cout<<a[0]<<" ";
   	 a.erase(a.begin(),a.begin()+1);
   } 
   if(a.size()==0)
   return 0;
   
    while(a.size()!=1)
	 {
	   x=m-a.size();	
	 	while(x>a.size())
		 {
	 	   x-=a.size();	
		 }
		 cout<<a[x-1]<<" ";
		for(int i=0;i<x-1;i++)	
		{ 
		 a.push_back(a[0]);
		 a.erase(a.begin(),a.begin()+1);
	    }
		a.erase(a.begin(),a.begin()+1);		 	
	 } 
    cout<<a[0];
	return 0;
}
