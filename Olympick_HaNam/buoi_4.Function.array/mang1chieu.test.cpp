#include<bits/stdc++.h> 
# define maxn 10001
  using namespace std;
  
  int number_of_uoc(int x)
  {  int count1=0;
  	for(int i=1;i<=x;i++)
  	   {  if(x%i==0)
  	   count1++;
		 }
		 return count1;
  }
  bool chekprime(int x) 
        { if(x<2)  return false;
          if(x==2)  return true;
          else 
          for(int i=2;i<x;i++)
         if(x%i==0)
            return false;
	        return true;
	    }
   int main()
  { int a[maxn],b[maxn],n,x,i,j,k;
               cin>>n;
      for(i=1;i<=n;i++)
       {
        cin>> a[i]; 
	   }
      for(j=1;j<=n;j++)
        { 
          x=number_of_uoc(a[j]);
          if(chekprime(x)==true)
          b[j]=x;
          else
          b[j]=-1; 
	    }
             for(k=1;k<=n;k++)
             cout<< b[k]<<" ";
	  return 0; 
  }
