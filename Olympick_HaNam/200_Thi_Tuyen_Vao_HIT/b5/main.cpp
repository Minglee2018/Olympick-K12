#include <iostream>

using namespace std;

int main()
{
    long long input; cout<<"Nhap so dien"<<endl; cin>>input;
    if(input>=100) cout<<input*2000;
    else if(input>=50) cout<<input*1500;
    else cout<<input*1000;
    return 0;
}
