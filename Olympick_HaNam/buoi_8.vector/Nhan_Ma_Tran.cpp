#include<bits\stdc++.h>
using namespace std;

int main()
{    int m,n,q;
     cin>>m>>n>>q;
     vector <int> a[100],b[100],c[100];
  for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
          {
              int temp; cin>>temp;
              a[i].push_back(temp);
          }
    }
  for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            int temp; cin>>temp;
            b[i].push_back(temp);
        }
    }
    int val=0;
      for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            val=0;
            for(int k=0;k<n;k++){
                val+=a[i][k]*b[k][j];
            }
            c[i].push_back(val);

        }
    }    
        cout<<endl<<endl<<endl;
        for(int d=0;d<m;d++)
        {
            for(int dd=0;dd<q;dd++)
            {
                cout<<c[d][dd]<<" ";
            }
        cout<<endl;
        }
    return 0;
}
