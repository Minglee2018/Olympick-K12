#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a; cout<<"Nhap a = ";
    cin>>a;
    if(a%2==0)
    {
        for(int i=1; i<=10; i++)
        {
            for(int j=1; j<=10
            ; j++)
                cout<<"* ";
            cout<<endl;
        }
    }
    else
    {
        int h=10,z=1;
        while(h--)
        {
            cout<<" ";
            for(int i=1; i<=z; i++)
                cout<<"*";
            cout<<endl,z+=2;
        }
    }
    return 0;
}
