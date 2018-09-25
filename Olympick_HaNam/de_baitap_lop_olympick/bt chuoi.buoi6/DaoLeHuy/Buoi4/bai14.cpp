#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    bool lg = true;
    for (int i = 0; i < s.length()/2; i++)
        if (s[i] != s[s.length() - i - 1])
        {
            lg = false;
            break;
        }
    if (lg == true) cout << "DS";
        else cout << "KDS";
    return 0;
}

