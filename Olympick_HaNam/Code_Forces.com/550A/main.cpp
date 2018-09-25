#include<bits/stdc++.h>
using namespace std;
string s; int a[100000],k,j,res,res1,x;
int main()
{
    cin>>s;
        int p=s.find("ABABA",0),pp=s.find("BABAB",0); if(p!=-1 || pp !=-1) {cout<<"YES"; return 0;}
    while(true){
        int temp1=s.find("BAB",0);
            if(temp1!=-1)
                s.erase(temp1,3),s.insert(temp1,"XXX"),x++;
        int temp=s.find("ABA",0);
            if(temp!=-1)
                s.erase(temp,3),s.insert(temp,"XXX"),x++;
         if(temp1==-1 && temp==-1) break;
    }
    for(int i=0;i<s.length();i++){
        if(i>0)
        {
            if(s[i-1]=='A' && s[i]=='B')
                res1++;
            if(s[i-1]=='B' && s[i]=='A')
                res++;
        }
    }
    if(x==0){
        if(res!=0 && res1!=0) {cout<<"YES"; return 0;}
        else {cout<<"NO"; return 0;}
    }
    else {
        if(x%2==0){ cout<<"YES"; return 0;}
        else if(res==0 && res1==0) {cout<<"NO"; return 0;}
    }
    cout<<"YES";
}
