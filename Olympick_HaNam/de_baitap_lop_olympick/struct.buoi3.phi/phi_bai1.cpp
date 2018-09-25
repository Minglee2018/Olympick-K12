#include<bits/stdc++.h> 
using namespace std ;
struct danhsach {
	string sbd, ten, gioitinh, s, hokhau, ngaysinh ;
	int tuoi ;
	float diemtoan, diemli, diemhoa, tongdiem ;
};
int main () {
	int i=0, dem1=0, dem2= 0, dem3=0, x; 
	danhsach ds[1000] ;
	cout << "danh sach thi sinh" << endl ;
	while(true) {
		cout << "nhap vao sbd cua thi sinh thu " << i+1 << " :" ;
		if (i>1) cin.ignore();
		getline(cin, ds[i].sbd) ;
		if(ds[i].sbd=="") {
			break ;
		}
		cout << "nhap vao ho va ten : " ;
		getline(cin, ds[i].ten) ;
		cout << "nhap vao ngay thang nam sinh : " ;
		getline(cin, ds[i].ngaysinh) ;
		cout << "nhap vao tuoi : " ;
		cin >> ds[i].tuoi ;
		cin.ignore() ;
		cout <<"nhap vao gioi tinh :" ;
		getline(cin,ds[i].gioitinh) ;
		cout << "nhap vao ho khau : " ;
		getline(cin, ds[i].hokhau) ;
		cout << "nhap vao diem toan : " ;
		cin >> ds[i].diemtoan ;
		cout << "nhap vao diem li : " ;
		cin >> ds[i].diemli ;
		cout << "nhap vao diem hoa : " ;
		cin >> ds[i].diemhoa ;
		cin.ignore() ;
		ds[i].tongdiem=ds[i].diemtoan+ds[i].diemli+ds[i].diemhoa ;
		if (ds[i].gioitinh=="nu"&&ds[i].tongdiem>25) {
			dem1++;
		}
    	if (ds[i].hokhau=="ha noi") {
			dem2++;
		}
    	i++ ;
	}
	cout << endl ;
	cout << "So bao danh     Ho va ten      Ngay thang nam sinh     Gioi tinh     Ho khau    Tuoi     Diem toan     Diem li     Diem hoa     Tong diem" << endl ;
	for(int j=0; j<i; j++) {
		cout <<ds[j].sbd<<"     "<<ds[j].ten<<"     "<<ds[j].ngaysinh<<"                 "<<ds[j].gioitinh<<"     "<<ds[j].hokhau<<"    "<<ds[j].tuoi<<"     "<<ds[j].diemtoan<<"    "<<ds[j].diemli<<"    "<<ds[j].diemhoa<<"     "<<ds[j].diemtoan+ds[j].diemli+ds[j].diemhoa<<endl;
	}
	if(dem1>0) {
		cout << endl << "danh sach thi sinh nu co diem lon hon 25 " << endl ;
		cout << "So bao danh     Ho va ten      Ngay thang nam sinh     Gioi tinh     Ho khau    Tuoi     Diem toan     Diem li     Diem hoa     Tong diem" << endl ;
		for(int j=0; j<i; j++) {
			if(ds[j].gioitinh=="nu" && ds[j].tongdiem>25) {
				cout <<ds[j].sbd<<"     "<<ds[j].ten<<"     "<<ds[j].ngaysinh<<"                 "<<ds[j].gioitinh<<"     "<<ds[j].hokhau<<"    "<<ds[j].tuoi<<"     "<<ds[j].diemtoan<<"    "<<ds[j].diemli<<"    "<<ds[j].diemhoa<<"     "<<ds[j].diemtoan+ds[j].diemli+ds[j].diemhoa<<endl;
			}
		}
	}
	else {
		cout << "khong co hoc sinh nu tren 25 diem" << endl ;
	}
	cout << endl << "nhap vao diem chuan tuyen sinh :" ;
	cin >> x ;
	for(int j=0; j<i; j++) {
		if(ds[j].tongdiem >= x) {
			dem3++ ;
		}
	}
	cout << "co " << dem3 << " thi sinh trung tuyen" << endl ;
	if(dem2>0) {
		cout << endl << "danh sach thi sinh o ha noi trung tuyen la " << endl ;
		cout << "So bao danh     Ho va ten      Ngay thang nam sinh     Gioi tinh     Ho khau    Tuoi     Diem toan     Diem li     Diem hoa     Tong diem" << endl ;
		for(int j=0; j<i; j++) {
			if(ds[j].hokhau=="ha noi" && ds[j].tongdiem>=x) {
				cout <<ds[j].sbd<<"     "<<ds[j].ten<<"     "<<ds[j].ngaysinh<<"                 "<<ds[j].gioitinh<<"     "<<ds[j].hokhau<<"    "<<ds[j].tuoi<<"     "<<ds[j].diemtoan<<"    "<<ds[j].diemli<<"    "<<ds[j].diemhoa<<"     "<<ds[j].diemtoan+ds[j].diemli+ds[j].diemhoa<<endl;
			}
		}
	}
	else {
		cout << "khong co thi sinh nao o ha noi trung tuyen " << endl ;
	}
	cout << "sau khi sap xep danh sach la " << endl ;
	for(int j=0; j<i-1; j++) {
		for(int k=j+1; k<i; k++) {
			if(ds[j].tongdiem>ds[k].tongdiem) {
				float tg = ds[j].tongdiem ;
				ds[j].tongdiem = ds[k].tongdiem ;
				ds[k].tongdiem = tg ;
			}
		}
	}
	cout << "So bao danh     Ho va ten      Ngay thang nam sinh     Gioi tinh     Ho khau    Tuoi     Diem toan     Diem li     Diem hoa     Tong diem" << endl ;
	for(int j=0; j<i; j++) {
		cout <<ds[j].sbd<<"     "<<ds[j].ten<<"     "<<ds[j].ngaysinh<<"                 "<<ds[j].gioitinh<<"     "<<ds[j].hokhau<<"    "<<ds[j].tuoi<<"     "<<ds[j].diemtoan<<"    "<<ds[j].diemli<<"    "<<ds[j].diemhoa<<"     "<<ds[j].diemtoan+ds[j].diemli+ds[j].diemhoa<<endl;
	}
	return 0;
}
