#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int KiTuSo = 0, KiTuChuThuong = 0, KiTuChuHoa = 0;
    cout << s.length();
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57) KiTuSo++;
            else if (s[i] >= 65 && s[i] <= 90) KiTuChuHoa++;
                else if (s[i] >= 97 && s[i] <= 122) KiTuChuThuong++;
    }
    cout << KiTuSo << " " << KiTuChuThuong << " " << KiTuChuHoa;
    return 0;
}
