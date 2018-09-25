#include <bits\stdc++.h>

using namespace std;

int main()
{
   int n,dem=0,sonhonhat=INT_MAX; long long ans=0;cin>>n;

   while(n!=0)
    {
        int temp=0; cin>>temp;
        ans+=temp;
        if(temp%2!=0)
        {
             dem++;
        if(sonhonhat>temp)
            sonhonhat=temp;
        }
            --n;
    }
    if(dem%2!=0)
      cout<< ans-sonhonhat;
      else 
      cout<<ans;
	

    return 0;
}

