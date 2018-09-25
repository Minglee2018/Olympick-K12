#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    while (n != 0)
    {
        char x = s[0];
        int i = 0, temp = 0;
        while (i != n)
            if (s[i] == x)
            {
                temp++;
                s.erase(s.begin() + i);
                n--;
            }
        else i++;
        cout << "Ki tu "  << x << " xuat hien " << temp << " lan" << endl;
    }
    return 0;
}
