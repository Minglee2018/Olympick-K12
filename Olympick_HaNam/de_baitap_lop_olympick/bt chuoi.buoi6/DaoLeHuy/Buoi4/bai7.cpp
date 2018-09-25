#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int x;
    cin >> x;
    a.insert(x, b);
    cout << a;
    return 0;
}
