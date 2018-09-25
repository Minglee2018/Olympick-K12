#include <bits/stdc++.h>
using namespace std;
    vector <int> b1,b2;
  struct cmp
  {
      bool operator() (int a,int b)
      {
          return a>b;
      }
  };
int main()
{    bool result= false;
     map <int,int,cmp> a;
     int n; cin>>n;
     for(int i=0;i<n;i++)
     {
         int temp; cin>>temp;
         a[temp]++;
     }
     for( map <int,int,cmp> :: iterator it=a.begin();it!=a.end();it++)
     {
        int temp1= (*it).first; int temp2=(*it).second;
        b1.push_back(temp1);
        b2.push_back(temp2);
     }
         int j=0;
         for(int i=0;i<b2.size();i++){
            if(b2[j++]%2!=0){
                result=true; break;
            }
         }
       if(result==true)
        cout<<"Conan";
       else
        cout<<"Agasa";
    return 0;
}
