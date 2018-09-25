#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct canbo{
  int mcb;
  string name;
  int ngaysinh;
  int thangsinh;
  int namsinh;
  string gioitinh;
  string chucvu;
  int luong;
  int tuoi;
};

int main(void){
  int i,j,n,m,sl=0,max=0,ans=1;
  canbo cb[999];
  cout << "CHUONG TRINH QUAN LI CAN BO\n\n";
  cout << "Nhap so luong can bo muon nhap thong tin: ";
  cin >> n;
  for (i=1;i<=n;i++){
    cout << "\nCan bo thu " << i << ":\n";
    cout << "Nhap ma can bo: ";
    cin >> cb[i].mcb;
    cin.ignore();
    cout << "Nhap ho va ten can bo: ";
    getline(cin,cb[i].name);
    cout << "Nhap ngay thang nam sinh (cach nhau boi dau cach): ";
    cin >> cb[i].ngaysinh >> cb[i].thangsinh >> cb[i].namsinh;
    cout << "Nhap gioi tinh (1 la nam, 0 la nu): ";
    cb[i].tuoi=2017-cb[i].namsinh;
    cin >> m;
    if (m==1) cb[i].gioitinh="Nam"; else cb[i].gioitinh="Nu";
    cin.ignore();
    if ((cb[i].tuoi>55 && cb[i].gioitinh=="Nam")||(cb[i].tuoi>50 && cb[i].gioitinh=="Nu")) sl++;
    cout << "Nhap chuc vu: ";
    getline(cin,cb[i].chucvu);
    cout << "Nhap muc luong: ";
    cin >> cb[i].luong;
    if (cb[i].luong>max){
      ans=i;
      max=cb[i].luong;
    }
  }

  if (sl>0){
    cout << "\n\nDANH SACH CAN BO DA DEN TUOI NGHI HUU\n\n";
    cout << "Ma can bo     Ho va ten      Ngay thang nam sinh     Tuoi     Gioi tinh     Chuc vu     Muc luong\n";
    for (i=1;i<=n;i++){
      if ((cb[i].tuoi>55 && cb[i].gioitinh=="Nam")||(cb[i].tuoi>50 && cb[i].gioitinh=="Nu")){
        cout << "     " << cb[i].mcb << "       " << cb[i].name << "        " << cb[i].ngaysinh << "/" << cb[i].thangsinh << "/" << cb[i].namsinh;
        cout << "            " << cb[i].tuoi << "        " << cb[i].gioitinh << "     " << cb[i].chucvu << "     " << cb[i].luong << "\n";
      }
    }
  }
  else cout << "\nKhong co can bo nao da den tuoi nghi huu.\n";

  cout << "\nCan bo co muc luong cao nhat la: " << cb[ans].name << "\n";
  cout << "Ma can bo: " << cb[ans].mcb << "\n";
  cout << "Ho va ten: " << cb[ans].name << "\n";
  cout << "Ngay thang nam sinh: " << cb[ans].ngaysinh << "/" << cb[ans].thangsinh << "/" << cb[ans].namsinh << "\n";
  cout << "Tuoi: " << cb[ans].tuoi << "\n";
  cout << "Gioi tinh: " << cb[ans].gioitinh << "\n";
  cout << "Chuc vu: " << cb[ans].chucvu << "\n";
  cout << "Muc luong: " << cb[ans].luong << "\n";

  cout << "\nNhap thong tin cua can bo ban muon chen vao vi tri thu 3: ";
  canbo x;
  cout << "\nNhap ma can bo: ";
  cin >> x.mcb;
  cin.ignore();
  cout << "Nhap ho va ten can bo: ";
  getline(cin,x.name);
  cout << "Nhap ngay thang nam sinh (cach nhau boi dau cach): ";
  cin >> x.ngaysinh >> x.thangsinh >> x.namsinh;
  cout << "Nhap gioi tinh (1 la nam, 0 la nu): ";
  x.tuoi=2017-x.namsinh;
  cin >> m;
  if (m==1) x.gioitinh="Nam"; else x.gioitinh="Nu";
  cin.ignore();
  cout << "Nhap chuc vu: ";
  getline(cin,x.chucvu);
  cout << "Nhap muc luong: ";
  cin >> x.luong;
  n++;
  for(i=n;i>3;i--){
    cb[i]=cb[i-1];
  }
  cb[3]=x;

  cout << "\nNhap thong tin cua can bo ban muon chen vao vi tri dau tien: ";
  cout << "\nNhap ma can bo: ";
  cin >> x.mcb;
  cin.ignore();
  cout << "Nhap ho va ten can bo: ";
  getline(cin,x.name);
  cout << "Nhap ngay thang nam sinh (cach nhau boi dau cach): ";
  cin >> x.ngaysinh >> x.thangsinh >> x.namsinh;
  cout << "Nhap gioi tinh (1 la nam, 0 la nu): ";
  x.tuoi=2017-x.namsinh;
  cin >> m;
  if (m==1) x.gioitinh="Nam"; else x.gioitinh="Nu";
  cin.ignore();
  cout << "Nhap chuc vu: ";
  getline(cin,x.chucvu);
  cout << "Nhap muc luong: ";
  cin >> x.luong;
  n++;
  for(i=n;i>2;i--){
      cb[i]=cb[i-1];
  }
  cb[1]=x;

  n--;
  for(i=2;i>=n;i++){
    cb[i]=cb[i+1];
  }

  cout << "\n\nDANH SACH CAN BO SAU KHI CHEN VA XOA\n\n";
  cout << "Ma can bo     Ho va ten      Ngay thang nam sinh     Tuoi     Gioi tinh     Chuc vu     Muc luong\n";
  for (i=1;i<=n;i++){
      cout << "     " << cb[i].mcb << "       " << cb[i].name << "        " << cb[i].ngaysinh << "/" << cb[i].thangsinh << "/" << cb[i].namsinh;
      cout << "            " << cb[i].tuoi << "        " << cb[i].gioitinh << "     " << cb[i].chucvu << "     " << cb[i].luong << "\n";
    }

  canbo temp;
  for (j=n;j>=2;j--)
   for (i=1;i<=j-1;i++) {
      if (cb[i].luong>cb[i+1].luong) {
         temp = cb[i];
         cb[i] = cb[i+1];
         cb[i+1] = temp;
      }
   }
   cout << "\n\nDANH SACH CAN BO (Da sap xep theo muc luong)\n\n";
   cout << "Ma can bo     Ho va ten      Ngay thang nam sinh     Tuoi     Gioi tinh     Chuc vu     Muc luong\n";
   for (i=1;i<=n;i++){
       cout << "     " << cb[i].mcb << "       " << cb[i].name << "        " << cb[i].ngaysinh << "/" << cb[i].thangsinh << "/" << cb[i].namsinh;
       cout << "            " << cb[i].tuoi << "        " << cb[i].gioitinh << "     " << cb[i].chucvu << "     " << cb[i].luong << "\n";
     }
}
