#include<bits/stdc++.h>
  using namespace std;
   int tong=0;
int main()
    {      int n,a[111111];
            do
        {    cout<<"nhap n"<<endl;
      	      cin>>n;
	    }
	            while (n<0||n>50);
	  
                 for(int i=0;i<n;i++)
      {         cout<<"a["<<i<<"]="<<"  ";
              cin>>a[i];
	  }
	     cout<<"cac phan tu vua nhap la="<<endl;
	        for(int k=0;k<n;k++)
	         {
	         	 cout<<"a["<<k<<"]="<<a[k]<<endl;
			 }
	                for(int j=0;j<n;j++)
		      {    
			           tong=tong+a[j];
			  }            cout<< "tong cac phan tu cua mang la:"<< tong;   
			                  return 0;
	}
	
