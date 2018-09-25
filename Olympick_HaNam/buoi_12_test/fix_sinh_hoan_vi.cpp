#include<bits\stdc++.h>
#define maxn 10001
using namespace std; 
    int  a[maxn];
 
 
 int Find_Index(int j)                      // tim vi tri co gia tri lon nhat thoa man a[j]<a[j+1]>a[j+2],..,a[n].. cua bai toan
 {
 	for(int k=1;k<j;k++)
 	{
 	    if(a[k]>a[k-1] && a[k]>a[k+1] && tt(k)==true)
		 {
		 	
 		     return k;
		 }
 		 else 
 		 continue;
	}
 }
  int tt(int x)
 {  
    bool result=true; 
 	for(int i=0;i<x;i++)
      if(a[x]<a[i])
      result=false;
 }
 
 int main (){  
	  int tg=0,i,j=0;
      long long n;
   	  cout<<"nhap n"<<endl;              // input
   	  cin>>n;  
                                        // tach cac so cua n gan vao mang  	  
    while(n!=0) 
	{  
	a[j++]=(long long)n%10;
    n=n/10;
	} 
	  int size=j;                        //do dai cua mang a
   	    int d=Find_Index(size)           // tim vi tri va doi cho vi chi do'
   	       {
   	       	tg=a[d];
   	       	a[d]=a[d+1];
   	       	a[d+1]=tg;  break;
		   } 
		     	     		
		tg=0;                            // sap sep tang dan tu phai qua trai
		for(int x=0;x<d;x++){
		     for(int y=x+1;y<=d;y++){			 
			     if(a[x]>a[y]){	
					 tg=a[x];
				     a[x]=a[y];				 						
					 a[y]=tg;
				}
			}			
		}
        	
			for(int i=size-1;i>=0;i--)    // output
        cout<<a[i];
        
     	return 0;
   }
