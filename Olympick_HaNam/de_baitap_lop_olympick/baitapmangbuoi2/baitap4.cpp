#include<bits/stdc++.h>
  using namespace std;
   int tong=0;
int main()
    {      int n,a[111111];
             cout<<"nhap n"<<endl;
      	       cin>>n;
	             for(int i=0;i<n;i++)
             {     cout<<"a["<<i<<"]="<<"  ";
                    cin>>a[i];
             }
	        	    int tongchan=0,tongle=0;
		          for(int k=0;k<n;k++)
		    {    if(a[k]%2==0)
		       tongchan+=a[k];
		      else
		    tongle+=a[k];
		    }
		    cout<<"tong cac phan tu chan trong mang la:"<<tongchan<<endl;
		    cout<<"tong cac phan tu le trong mang la:"<<tongle;
		    return 0;
		  
	}
