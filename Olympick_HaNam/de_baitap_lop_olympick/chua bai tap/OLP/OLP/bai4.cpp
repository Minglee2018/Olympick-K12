#include <bits/stdc++.h>

using namespace std;

int a[100][100];
int n,m,countt,num,line2,line1;

void swapNumber(int num1, int num2)
{
    int temp=num1;
    num1=num2;
    num2=temp;
}

int swapLine(int line1, int line2)
{
    int temp;
    for (int j=1;j<=m;j++)
    {
        temp=a[line1][j];
        a[line1][j]=a[line2][j];
        a[line2][j]=temp;
    }
}

int main()
{

    cin >> n >> m;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];
    cout << "Hoan doi dong: "; cin >> line1;
    cout << "va: "; cin >> line2;

    swapLine(line1,line2);
    cout << "Mang moi la:\n";
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}

