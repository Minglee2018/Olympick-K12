#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

struct student{
  string sbd;
  string name;
  int ngaysinh;
  int thangsinh;
  int namsinh;
  string gioitinh;
  string hokhau;
  int tuoi;
  float diemtoan;
  float diemli;
  float diemhoa;
  float tongdiem;
};

int main(void){
  student s[999];
  int i=0,j,n,sl=0,sl1=0;
  cout << "NHAP DANH SACH THI SINH \n";
  while (true){
    i++;
    cout << "Thi sinh so " << i << " :\n";
    if (i>1) cin.ignore();
    cout << "Nhap so bao danh: ";
    getline(cin,s[i].sbd);
    if (s[i].sbd==""||s[i].sbd==" ") break;
    else {
      cout << "Nhap ho va ten: ";
      getline(cin,s[i].name);
      cout << "Nhap ngay thang nam sinh (cach nhau boi dau cach): ";
      cin >> s[i].ngaysinh >> s[i].thangsinh >> s[i].namsinh;
      cout << "Nhap gioi tinh (1 la nam, 0 la nu): ";
      cin >> n;
      if (n==1) s[i].gioitinh="Nam"; else s[i].gioitinh="Nu";
      cin.ignore();
      cout << "Nhap ho khau: ";
      getline(cin,s[i].hokhau);
      cout << "Nhap diem toan: ";
      cin >> s[i].diemtoan;
      cout << "Nhap diem li: ";
      cin >> s[i].diemli;
      cout << "Nhap diem hoa: ";
      cin >> s[i].diemhoa;
      s[i].tuoi=2017-s[i].namsinh;
      s[i].tongdiem=s[i].diemtoan+s[i].diemli+s[i].diemhoa;
      n=i;
      if (s[i].gioitinh=="Nu"&&s[i].tongdiem>25) sl++;
      if (s[i].hokhau=="Ha Noi") sl1++;
    }
  }

  cout << "\n\nDANH SACH THI SINH\n\n";
  cout << "So bao danh     Ho va ten      Ngay thang nam sinh     Gioi tinh     Ho khau    Tuoi     Diem toan     Diem li     Diem hoa     Tong diem\n";
  for (i=1;i<=n;i++) {
    cout << "     " << s[i].sbd << "       " << s[i].name << "        " << s[i].ngaysinh << "/" << s[i].thangsinh << "/" << s[i].namsinh;
    cout << "            " << s[i].gioitinh << "        " << s[i].hokhau << "     " << s[i].tuoi;
    cout << "          " << setprecision(3) << s[i].diemtoan << "            " << setprecision(3) << s[i].diemli << "           " << setprecision(3) << s[i].diemhoa << "            " << setprecision(3) << s[i].tongdiem << "\n";
  }

  if (sl>0) {
    cout << "\n\nDANH SACH THI SINH NU CO TONG DIEM TREN 25\n\n";
    cout << "So bao danh     Ho va ten      Ngay thang nam sinh     Gioi tinh     Ho khau    Tuoi     Diem toan     Diem li     Diem hoa     Tong diem\n";
    for (i=1;i<=n;i++) {
      if (s[i].gioitinh=="Nu"&&s[i].tongdiem>25){
        cout << "     " << s[i].sbd << "       " << s[i].name << "        " << s[i].ngaysinh << "/" << s[i].thangsinh << "/" << s[i].namsinh;
        cout << "            " << s[i].gioitinh << "        " << s[i].hokhau << "     " << s[i].tuoi;
        cout << "          " << setprecision(3) << s[i].diemtoan << "            " << setprecision(3) << s[i].diemli << "           " << setprecision(3) << s[i].diemhoa << "            " << setprecision(3) << s[i].tongdiem << "\n";
      }
    }
  }
  else cout << "Khong co thi sinh nu nao co tong diem tren 25.\n";

  float diemchuan;
  sl=0;
  cout << "\n\nNhap diem chuan tuyen sinh: ";
  cin >> diemchuan;
  for (i=1;i<=n;i++){
    if (s[i].tongdiem>=diemchuan) sl++;
  }
  if (sl>0) {
    cout << "Co " << sl << " thi sinh trung tuyen.";
    if (sl1>0) {
      cout << "\n\nDANH SACH THI SINH TRUNG TUYEN TAI HA NOI\n\n";
      cout << "So bao danh     Ho va ten      Ngay thang nam sinh     Gioi tinh     Ho khau    Tuoi     Diem toan     Diem li     Diem hoa     Tong diem\n";
      for (i=1;i<=n;i++) {
          if (s[i].tongdiem>=diemchuan && s[i].hokhau=="Ha Noi"){
            cout << "     " << s[i].sbd << "       " << s[i].name << "        " << s[i].ngaysinh << "/" << s[i].thangsinh << "/" << s[i].namsinh;
            cout << "            " << s[i].gioitinh << "        " << s[i].hokhau << "     " << s[i].tuoi;
            cout << "          " << setprecision(3) << s[i].diemtoan << "            " << setprecision(3) << s[i].diemli << "           " << setprecision(3) << s[i].diemhoa << "            " << setprecision(3) << s[i].tongdiem << "\n";
          }
        }
      }
    else cout << "\nKhong co thi sinh nao tai Ha Noi trung tuyen.";
    }
  else cout << "Khong co thi sinh nao trung tuyen";

  student temp;
  for (j=n;j>=2;j--)
   for (i=1;i<=j-1;i++) {
      if (s[i].tongdiem>s[i+1].tongdiem) {
         temp = s[i];
         s[i] = s[i+1];
         s[i+1] = temp;
      }
   }
   cout << "\n\nDANH SACH THI SINH (Da sap xep)\n\n";
   cout << "So bao danh     Ho va ten      Ngay thang nam sinh     Gioi tinh     Ho khau    Tuoi     Diem toan     Diem li     Diem hoa     Tong diem\n";
   for (i=1;i<=n;i++) {
     cout << "     " << s[i].sbd << "       " << s[i].name << "        " << s[i].ngaysinh << "/" << s[i].thangsinh << "/" << s[i].namsinh;
     cout << "            " << s[i].gioitinh << "        " << s[i].hokhau << "     " << s[i].tuoi;
     cout << "          " << setprecision(3) << s[i].diemtoan << "            " << setprecision(3) << s[i].diemli << "           " << setprecision(3) << s[i].diemhoa << "            " << setprecision(3) << s[i].tongdiem << "\n";
   }
}
