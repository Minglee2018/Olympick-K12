#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b = "", c;
    getline(cin, a);

    int j = 0, maxlength = 0;

    for (int i = 0; i <= a.length(); i++)
        if (a[i] != 32 && a[i] != '\0')
        {
            j++;
            b+= a[i];
        }
        else
        {
            if (b.length() > maxlength)
            {
                c = "";
                c+= b;
                maxlength = b.length();
            }
            else if (b.length() == maxlength)
                {
                    c+= " ";
                    c+= b;
                }
            j = 0;
            b = "";
        }

    cout << c;

    return 0;
}
