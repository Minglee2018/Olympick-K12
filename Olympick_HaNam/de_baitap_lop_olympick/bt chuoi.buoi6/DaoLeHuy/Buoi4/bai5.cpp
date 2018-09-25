#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length()/2; i++)
        swap(s[i], s[s.length() - i - 1]);
    cout << s;
    return 0;
}
