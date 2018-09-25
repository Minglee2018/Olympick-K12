#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int Sum = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] > 47 && s[i] < 58) Sum+= s[i] - 48;
    cout << Sum;
    return 0;
}

