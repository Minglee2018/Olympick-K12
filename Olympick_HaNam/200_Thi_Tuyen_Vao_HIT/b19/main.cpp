#include <iostream>

using namespace std;

int main()
{
   int n,i; cout<<"Nhap n = ";
   for(cin>>n,i=n-1; i>=0; i--)
   {
       bool k=true;
        for(int j=2; j<i; j++)
        {
            if(i%j==0) k=false;
        }
        if(k) return cout<<i,0;
   }

    return 0;
}
