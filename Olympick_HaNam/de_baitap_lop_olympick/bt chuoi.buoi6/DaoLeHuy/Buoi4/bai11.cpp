#include <iostream>
#include <string>

using namespace std;

void DaoXau(string &s)
{
    for (int i = 0; i < s.length() / 2; i++)
    {
        swap(s[i], s[s.length() - i - 1]);
    }
}

int main()
{
    string s, s1 = "", s2 = "", s3 = " ";
    getline(cin, s);

    int m, n;
    cin >> m >> n;
    int temp = 0, j = 0, temp2;

    if (n < m)
    {
        n = n + m;
        m = n - m; // m phai nho hon n
        n = n - m;
    }

    for (int i = 0; temp < m; i++)
    {
        if (s[i] == 32 || s[i] == '\0') temp++;
        if (temp < m)
        {
            s1+= s[i];
            temp2 = i + 2;
        }
    }
    for (int i = s1.length() - 1; i >= 0; i--)
        if (s1[i] != 32)
        {
            s2+= s1[i];
            s1.erase(s1.begin() + i);
        }
            else break;

    DaoXau(s2);

    cout << s1;
    s1 = "";

    for (int i = temp2; temp < n; i++)
    {
        if (s[i] == 32 || s[i] == '\0') temp++;
        if (temp < n)
        {
            s1+= s[i];
            temp2 = i + 1;
        }
    }
    for (int i = s1.length() - 1; i >= 0; i--)
        if (s1[i] != 32)
        {
            s3+= s1[i];
            s1.erase(s1.begin() + i);
        }
        else break;

    DaoXau(s3);

    cout << s3;
    cout << s1;

    cout << s2;
    for (int i = temp2; i < s.length(); i++)
        cout << s[i];
    return 0;
}
