#include<bits/stdc++.h>
using namespace std;
vector <int> a,b;
 int main ()
 {
     int m,s; cin>>m>>s;  int t=s; int r=m;
     if(s>9*m)
        cout<<-1<<" "<<-1;
     else if(m>1 && s==0)
      cout<<-1<<" "<<-1;
     else if(m==0)
      cout<<-1<<" "<<-1;
     else{          // tim so lon
     while(m!=0)
     {    int t=9;
          if(t<=s){
               b.push_back(9);
                s=s-t;
                m--;
          }
          else{b.push_back(s);
                s=0;
                m--;
              }
     }
      if( r==1 && t==0)    //TH: t=1 d=0
        cout<<0;
      else{
         t=t-1;
    while(r!=0){
       int k=0;
            while(k!=9){
            if(t<=0) break;
            k++; t--;
            }
        a.push_back(k);
          r--;
    }
    int p=a.back(); p=p+1;
      a.pop_back();
      a.push_back(p);

          for(int i=a.size()-1;i>=0;i--)
            cout<<a[i];
      }
//in ra so be
             cout<<" ";
          for(int j=0;j<b.size();j++)
             cout<<b[j];
// in ra so lon
 }
     return 0;
 }







