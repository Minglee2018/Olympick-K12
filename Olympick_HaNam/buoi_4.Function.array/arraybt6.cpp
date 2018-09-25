#include<bits/stdc++.h>
#define maxn 1001 
using namespace std; 
int a[maxn*2],b[maxn],c[maxn];
  int main () 
      { int n,i,k,demam=0,demduong=0,t=1,y=1;
        cin>>n;
		for( i=1;i<=n;i++)
		 { cin>>a[i];
		   if(a[i]<0)
		  { b[t]=a[i];
		    demam++;t++;
		  }
		   else if(a[i]>=0)
		   {c[y]=a[i];
		   demduong++;y++;
		   }
		  } 
	 for(i=1;i<=demam-1;i++)
        for(k=i+1;k<=demam;k++)
        { if(b[i] > b[k])
             { int tg=b[i];
               b[i]=b[k];
               b[k]=tg;
			 }
		}
	 for(i=1;i<=demduong-1;i++)
	 for(k=i+1;k<=demduong;k++)
		  { 
		     if(c[i] < c[k])
		       { int tg=c[i];
		         c[i]=c[k];
		         c[k]=tg;
			   }
		  }
        
        for(i=1;i<=t-1;i++)
        cout<<b[i]<<" ";
       for(k=1;k<=y-1;k++)
       cout<<c[k]<<" ";
     //for(i=1;i<=n;i++)
     //  cout<<a[i]<<" ";
        return 0;
	   } 
