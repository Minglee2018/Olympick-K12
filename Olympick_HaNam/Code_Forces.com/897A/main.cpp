#include<bits/stdc++.h>

 using namespace std;
 string s;
 void invo(int a,int b, char x,char y)
 {
     for(int i=a-1;i<=b-1;i++){
        if(s[i]==x) s[i]=y;
     }
 }

 int main()
 {
      int a,b,n,m;  char x,y;
     cin>>n>>m>>s;
     for(int i=1;i<=m;i++){
        for(int j=1;j<=4;j++){
            if(j==1)      cin>>a;
            else if(j==2) cin>>b;
            else if(j==3) cin>>x;
            else if (j==4) {cin>>y;invo(a,b,x,y);}
        }
    }
     cout<<s;
     return 0;
 }
