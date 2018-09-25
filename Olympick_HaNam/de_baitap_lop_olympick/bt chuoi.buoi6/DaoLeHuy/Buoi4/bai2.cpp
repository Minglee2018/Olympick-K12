#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char x;
    cin >> x;
    int n = s.length(), i = 0;
    while (i != n)
        if (s[i] == x)
        {
            s.erase(s.begin() + i);
            n--;
        }
        else i++;
    cout << s;
    return 0;
}
