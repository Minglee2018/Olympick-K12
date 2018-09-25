#include <bits/stdc++.h>
using namespace std;

int main()
{
      vector <char> a;
       int n;  cin>>n;
     for(int i=0;i<n;i++)
     {
          char x; cin>>x;
          a.push_back(x);
     } 
       for(int i=1;i<a.size();i++)
       {
            if(a[i]<a[i-1] )           
              {a.erase(a.begin()+i,a.begin()+i+1);
              i=i-2;
			  }
        
            if(a[i]==a[i-1])
              {a.erase(a.begin()+i,a.begin()+i+1);
              i=i-2;
			  }
       }
 
     for(int i=0;i<a.size();i++)
     {
         cout<<a[i]<<" ";
     }


    return 0;
}
