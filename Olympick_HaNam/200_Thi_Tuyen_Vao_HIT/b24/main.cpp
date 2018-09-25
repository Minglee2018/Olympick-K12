#include <iostream>

using namespace std;

int main()
{
    int a; cout<< "Nhap a = "; cin>>a;
    if(a%2==0)
    {
        cout<<"*    *"<<endl;
        cout<<"*    *"<<endl;
        cout<<"******"<<endl;
        cout<<"*    *"<<endl;
        cout<<"*    *"<<endl;
    }
    else
    {
        cout<<"*"<<endl;
        cout<<"*"<<endl;
        cout<<"*"<<endl;
        cout<<"*"<<endl;
        cout<<"*****"<<endl;
    }
    return 0;
}
