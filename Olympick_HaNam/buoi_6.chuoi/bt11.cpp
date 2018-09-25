#include<bits\stdc++.h> 
using namespace std; 
 int main() 
   {  int n,m,i,j=0,k,a[50],b[50]={0};
      string s,d,e;
      getline(cin,s);
       cin>>n>>m;
  	    if(s[0]!=' ')
	  {a[j]=0;j++;   
	  }
for(i=0;i<s.length();i++)
       if(s[i]==' '&&s[i+1]!=' ')
          { a[j]=i+1;
           j++;
		  }
   if(s[s.length()-1]==' ')
	       j=j-1;
 for(i=0;i<j;i++)
       { for(k=a[i];k<s.length();k++) 
        {if(s[k]!=' ') 
		  b[i]++;
		  else
		  break; 
       	}
	   }
	   e=s.substr(a[n-1],b[n-1]+1);
	   d=s.substr(a[m-1],b[m-1]+1);
	   s.erase(a[m-1],b[m-1]+1);
	   s.erase(a[n-1],b[n-1]+1);
	  
	   s.insert( a[n-1],d);
	   s.insert( a[m-1],e);
	   cout<<endl;
	 cout<<s;
     return 0;
   }
