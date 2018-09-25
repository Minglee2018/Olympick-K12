#include <bits/stdc++.h>
#define maxn 100001
using namespace std;
int main()
{
    int n,x,Max_1=-maxn,Max_2=-maxn,Min_1=maxn,Min_2=maxn;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x>Max_1)
        {
            Max_2=Max_1;
            Max_1=x;
        }
        else
            if(x<Max_1&&x<Max_2)
            {
                Max_2=x;
            }
        if(x<Min_1)
        {
            Min_2=Min_1;
            Min_1=x;
        }
        else
            if(x>Min_1&&x<Min_2)
            {
                Min_2=x;
            }

    }
    cout<<"So lon nhat: "<<Max_1<<endl;
    cout<<"So lon thu hai: "<<Max_2<<endl;
    cout<<"So nho nhat: "<<Min_1<<endl;
    cout<<"So nho thu hai: "<<Min_2<<endl;
}
