#include <iostream>
#include <string>

using namespace std;

bool XetChuoi(string a, int i, string b)
{
    string c = a.substr(i, b.length());
    if (c == b) return true;
    else return false;
}

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    for (int i = 0; i <= a.length() - b.length(); i++)
        if (XetChuoi(a, i, b) == true) cout << i << endl;
    return 0;
}
