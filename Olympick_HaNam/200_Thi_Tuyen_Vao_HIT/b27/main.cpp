#include <iostream>

using namespace std;

int main()
{
    int h; cout<<"Nhap h = ";
    cin>>h;
    int d=1,z=1;
    for(int i=1; i<h; i++)
        z+=2;
    z=(z-d)/2;
    while(h--)
    {
        for(int i=1; i<=z; i++)
            cout<<" ";
        z-=1;
        for(int j=1; j<=d; j++)
            cout<<"*";
        d+=2;
        cout<<endl;
    }
}
