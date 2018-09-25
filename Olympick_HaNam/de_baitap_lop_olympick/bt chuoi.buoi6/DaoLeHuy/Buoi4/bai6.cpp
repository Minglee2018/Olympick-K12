#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    while (s[0] == 32) s.erase(s.begin());
    while (s[s.length() - 1] == 32) s.erase(s.begin() + s.length() - 1);
    for (int i = 1; i <= s.length() - 1; i++)
    {
        while (s[i] == 32 && s[i + 1] == 32)
        {
            s.erase(s.begin() + i);
        }
    }
    cout << s;
    return 0;
}
