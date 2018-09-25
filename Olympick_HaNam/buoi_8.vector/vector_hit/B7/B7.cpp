#include <bits/stdc++.h>

using namespace std;
int n,x,y,t,k; vector <int> a;
int main()
{   cout<<"nhap n=";
    cin>>n;
    cout<<"nhap vi tri va gia tri can chen";
    cin>>x>>y;
    cout<<"nhap 2 so can chen vao dau va cuoi mang";
    cin>>t>>k;
    cout<<"nhap "<<n<<" gia tri cho mang"<<endl;
    for(int i=0;i<n;i++){
    int temp;   cin>>temp;
        a.push_back(temp);
    }
    a.insert(a.begin(),t);
    a.push_back(k);
    a.insert(a.begin()+x-1,y);
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    return 0;
}
