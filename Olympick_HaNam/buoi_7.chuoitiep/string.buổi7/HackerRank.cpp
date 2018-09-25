#include<bits\stdc++.h>
 using namespace std; 
   int main() 
     { string a="hackerrank"; 
	   int n,i,j,k,v=0,v1=0,dem=0;  
       cin>>n; 
       string s[1001];
       for(i=0;i<n;i++) 
       cin>>s[i];
            for(i=0;i<n;i++){
            for(j=0;j<a.length();j++){
            	if(s[i].find(a[j],v)==-1){ 
				     dem=0;
					 break;
					}
					else{
					dem++;
					v1=s[i].find(a[j],v);	
						v=v1+1;
					}
					        	
		    	 }
		    	 if(dem==10)
		    	 cout<<"yes"<<endl;
		    	 else
		    	 cout<<"no"<<endl;
			}
	    
      return 0;
	 }
