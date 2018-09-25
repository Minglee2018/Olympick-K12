#include<bits\stdc++.h>
#define maxn 1001
#include<string>
  using namespace std; 
   int main() 
    {  int i,j=0,dem=0,k=0,max=0,a[maxn],b[maxn/2]={0};
       string s,c; 
        getline(cin,s); 
//tim vi tri dau tien cua moi tu nhap tu ban phim:       
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
// tim tu co so ky tu dai nhat:
    for(i=0;i<j;i++)
       { for(k=a[i];k<s.length();k++) 
        {if(s[k]!=' ') 
		  b[i]++;
		  else
		  break; 
       	}
	   }
      for(i=0;i<j;i++)
      {if(max<b[i]){
      	max= b[i];dem=a[i];
	    }
	  }
// max la so ky tu cua tu dai nhat,a[i] la vi tri cua tu do:
      c=s.substr(dem,max);
   cout<<c;
      
		 return 0;
	}
