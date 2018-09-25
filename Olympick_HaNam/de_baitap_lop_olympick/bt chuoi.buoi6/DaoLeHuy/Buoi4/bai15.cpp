#include <iostream>
#include <string>

using namespace std;

int So(string s)
{
    int j = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 48 && s[i] <= 57) j++;
    return j;
}

int Hoa(string s)
{
    int j = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 65 && s[i] <= 90) j++;
    return j;
}

int Thuong(string s)
{
    int j = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 97 && s[i] <= 122) j++;
    return j;
}

void InMax(string s1, string s2, string s3, int n1, int n2, int n3, int max)
{
    if (n1 == max) cout << s1 << endl;
    if (n2 == max) cout << s2 << endl;
    if (n3 == max) cout << s3 << endl;
}

int main()
{
    string s1, s2, s3;
    int MaxSo = So(s1), MaxHoa = Hoa(s1), MaxThuong = Thuong(s1);
    cin >> s1 >> s2 >> s3;

    if (So(s2) > MaxSo) MaxSo = So(s2);
    if (So(s3) > MaxSo) MaxSo = So(s3);

    if (Hoa(s2) > MaxHoa) MaxHoa = Hoa(s2);
    if (Hoa(s3) > MaxHoa) MaxHoa = Hoa(s3);

    if (Thuong(s2) > MaxThuong) MaxThuong = Thuong(s2);
    if (Thuong(s3) > MaxThuong) MaxThuong = Thuong(s3);

    cout << "So max: " << endl;
    InMax(s1, s2, s3, So(s1), So(s2), So(s3), MaxSo);

    cout << "Hoa max: " << endl;
    InMax(s1, s2, s3, Hoa(s1), Hoa(s2), Hoa(s3), MaxHoa);

    cout << "Thuong max: " << endl;
    InMax(s1, s2, s3, Thuong(s1), Thuong(s2), Thuong(s3), MaxThuong);
    return 0;
}

