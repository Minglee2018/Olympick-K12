#include <bits/stdc++.h>

using namespace std;
 map <char,int> u;
int black=0,white=0;
void dem(string x){
  u['Q']=9;   u['R']=5; u['B']=3; u['N']=3; u['P']=1; u['K']=0;
  u['q']=9;   u['r']=5; u['b']=3; u['n']=3; u['p']=1; u['k']=0;
   for(int i=0;i<x.length();i++){
    if( x[i]>='a' && x[i]<='z')
        black+=u[x[i]];
    else if( x[i]>='A' && x[i]<='Z')
        white+=u[x[i]];
  }
}

int main()
{
    string a;
  for(int i=0;i<8;i++){
    cin>>a;
    dem(a);
}
   if(white > black)
   cout<<"White";
   else if(white< black)
    cout<<"Black";
   else
    cout<<"Draw";
    return 0;
}
