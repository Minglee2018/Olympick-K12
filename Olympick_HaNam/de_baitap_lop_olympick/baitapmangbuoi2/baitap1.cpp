#include<bits/stdc++.h>
  using namespace std;
   int main()
    {  int n,a[111111];
      do
      { cout<<"nhap n"<<endl;
      	cin>>n;
	  }
	 while (n<0||n>50);
	  
          for(int i=0;i<n;i++)
      {      cout<<"a["<<i<<"]="<<"  ";
               cin>>a[i];
	  }
          for(int j=1;j<n;j++)
		      {  
		       cout<<"a["<<j<<"]="<<a[j]<<endl;
			  }      
			  return 0;
	}
	
