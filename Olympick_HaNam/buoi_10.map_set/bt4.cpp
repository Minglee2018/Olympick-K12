#include <bits\stdc++.h>
using namespace std;

int main()
{
  set <int> m;
  
  int n,x,a=0,k; cin>>n;

  for(int j=0;j<n;j++)
  {
    cin>>k;
    switch (k)
    {
    	case 1:
		{
            cin>>x;
            m.insert(x); 
			break;    
        }
       
    case 2:
	     {
            set<int> :: iterator it = m.end();
            m.erase(--it);
            break;
         }
    case 3:
	   {
        a=*m.begin();
        m.erase(a);  
		break;       
       }
           
	}
	 
   }  
   
     for( set<int> :: iterator it=m.begin();it!=m.end();it++)
     cout<<*it<<" ";
     
return 0;
}

