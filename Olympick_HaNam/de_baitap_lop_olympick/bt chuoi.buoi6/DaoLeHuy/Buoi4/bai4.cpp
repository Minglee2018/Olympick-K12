#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    cout << a.insert( a.length(), b);
    return 0;
}
