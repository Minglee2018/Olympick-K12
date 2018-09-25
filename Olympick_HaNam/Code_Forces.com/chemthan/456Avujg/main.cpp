#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > Q;
pair<int,int> p;
int main()
{
    int n,c,t=0;
    cin>> n;
    while(n--){
        cin>> p.second>> p.first;
        Q.push_back(p);
    }
    sort(Q.begin(),Q.end());
    unsigned int i=0;
    for(;i<Q.size();i++){
        if(Q[i].first>Q[i].second) {t=1;break;}
    }
    (t==1)?cout<<"Happy Alex"<< endl:cout<< "Poor Alex"<< endl;
    Q.clear();
    return 0;
}
