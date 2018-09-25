#include<bits/stdc++.h> 
using namespace std ;
struct danhsach {
	string ma, ten, chucvu, gioitinh ;
	int luong, ngaysinh, thangsinh, namsinh, tuoi ;
};

int main() {
	int n, x=0, dem1=0, dem2=0, max, danhdau ;
	danhsach ds[1000],ds2[1000], tg[1000] ;
	cout << "nhap vao so can bo :" ;
	cin >> n ;
	while(x<n) {
		cout << "nhap vao can bo thu " << x+1 << endl ;
		cin.ignore() ;
		cout << "ma can bo :" ;
		getline(cin, ds[x].ma) ;
		cout << "ho va ten :" ;
		getline(cin, ds[x].ten) ;
		cout << "gioi tinh :" ;
		getline(cin, ds[x].gioitinh) ;
		cout << "ngay thang nam sinh (cach nhau dau cach) :" ;
		cin >> ds[x].ngaysinh >> ds[x].thangsinh >> ds[x].namsinh ;
		cin.ignore() ;
		cout << "chuc vu :" ;
		getline(cin, ds[x].chucvu) ;
		cout << "bac luong :" ;
		cin >> ds[x].luong ;
		ds[x].tuoi=2017-ds[x].namsinh ;
		if(ds[x].gioitinh=="nam"&&ds[x].tuoi>55) {
			dem1++ ;
		}
		if(ds[x].gioitinh=="nu"&&ds[x].tuoi>50) {
			dem2++ ;
		}
		x++ ;
	}
	for(int i=0; i<n; i++) {
		cout << "can bo thu " << i+1 << endl ;
		cout << "ma can bo :" << ds[i].ma << endl ;
		cout << "ho va ten :" << ds[i].ten << endl ;
		cout << "gioi tinh :" << ds[i].gioitinh << endl ;
		cout << "ngay thang nam sinh :" << ds[i].ngaysinh << " " << ds[i].thangsinh << " " << ds[i].namsinh << endl ;
		cout << "chuc vu :" << ds[i].chucvu << endl;
		cout << "bac luong :" << ds[i].luong << endl ;
	}
	cout << endl << endl ;
	if(dem1>0 || dem2>0) {
		cout << "nguoi bi nghi huu la :" << endl ;
		for(int i=0; i<n; i++) {
			if((ds[i].gioitinh=="nam"&&ds[i].tuoi>55)||(ds[i].gioitinh=="nu"&&ds[i].tuoi>50)) {
				cout << ds[i].ten << endl;
			}
		}
	}
	else {
		cout << "chua co ai phai nghi huu" << endl ;
	}
	cout << endl << endl ;
	max = ds[0].luong ;
	for(int i=0; i<n; i++) {
		if(ds[i].luong>max) {
			max = ds[i].luong ;
			danhdau = i ;
		}
	}
	cout << "can bo co luong cao nhat la :" << ds[danhdau].ma << "      " << ds[danhdau].ten << "          " << ds[danhdau].ngaysinh<< " " << ds[danhdau].thangsinh<<" "<<ds[danhdau].namsinh<< "      "<< ds[danhdau].chucvu << "       "<< ds[danhdau].gioitinh<< endl ;
	cout << "nhap thong tin can bo muon chen vao vi tri thu 3" << endl ;
	cin.ignore() ;
	cout << "ma can bo :" ;
	getline(cin, ds2[0].ma) ;
	cout << "ho va ten :" ;
	getline(cin, ds2[0].ten) ;
	cout << "gioi tinh :" ;
	getline(cin, ds2[0].gioitinh) ;
	cout << "ngay thang nam sinh (cach nhau dau cach) :" ;
	cin >> ds2[0].ngaysinh >> ds2[0].thangsinh >> ds2[0].namsinh ;
	cin.ignore() ;
	cout << "chuc vu :" ;
	getline(cin, ds2[0].chucvu) ;
	cout << "bac luong :" ;
	cin >> ds2[0].luong ;
	cin.ignore() ;
	ds2[0].tuoi=2017-ds2[0].namsinh ;
	cout << endl ;
	cout << "danh sach sau khi chen vao vi tri thu 3 la :" << endl << endl ;
	for(int i=n; i>2; i--) {
		ds[i]=ds[i-1] ;
	}
	ds[2] = ds2[0];
	n++ ;
	for(int i=0; i<n; i++) {
		cout << "can bo thu " << i+1 << endl ;
		cout << "ma can bo :" << ds[i].ma << endl ;
		cout << "ho va ten :" << ds[i].ten << endl ;
		cout << "gioi tinh :" << ds[i].gioitinh << endl ;
		cout << "ngay thang nam sinh :" << ds[i].ngaysinh << " " << ds[i].thangsinh << " " << ds[i].namsinh << endl ;
		cout << "chuc vu :" << ds[i].chucvu << endl;
		cout << "bac luong :" << ds[i].luong << endl ;
	}
	
	cout << "nhap thong tin can bo muon chen vao vi tri thu 1" << endl ;
	cin.ignore() ;
	cout << "ma can bo :" ;
	getline(cin, ds2[0].ma) ;
	cout << "ho va ten :" ;
	getline(cin, ds2[0].ten) ;
	cout << "gioi tinh :" ;
	getline(cin, ds2[0].gioitinh) ;
	cout << "ngay thang nam sinh (cach nhau dau cach) :" ;
	cin >> ds2[0].ngaysinh >> ds2[0].thangsinh >> ds2[0].namsinh ;
	cin.ignore() ;
	cout << "chuc vu :" ;
	getline(cin, ds2[0].chucvu) ;
	cout << "bac luong :" ;
	cin >> ds2[0].luong ;
	cin.ignore() ;
	ds2[0].tuoi=2017-ds2[0].namsinh ;
	cout << endl ;
	cout << "danh sach sau khi chen vao vi tri thu 1 la :" << endl << endl ;
	for(int i=n; i>0; i--) {
		ds[i]=ds[i-1] ;
	}
	ds[0] = ds2[0];
	n++ ;
	for(int i=0; i<n; i++) {
		cout << "can bo thu " << i+1 << endl ;
		cout << "ma can bo :" << ds[i].ma << endl ;
		cout << "ho va ten :" << ds[i].ten << endl ;
		cout << "gioi tinh :" << ds[i].gioitinh << endl ;
		cout << "ngay thang nam sinh :" << ds[i].ngaysinh << " " << ds[i].thangsinh << " " << ds[i].namsinh << endl ;
		cout << "chuc vu :" << ds[i].chucvu << endl;
		cout << "bac luong :" << ds[i].luong << endl ;
	}
	
	cout << "danh sach sau khi xoa can bo o vi tri 2 la :" << endl << endl ;
	for(int i=1; i<n-1; i++) {
		ds[i]=ds[i+1] ;
	}
	n-- ;
	for(int i=0; i<n; i++) {
		cout << "can bo thu " << i+1 << endl ;
		cout << "ma can bo :" << ds[i].ma << endl ;
		cout << "ho va ten :" << ds[i].ten << endl ;
		cout << "gioi tinh :" << ds[i].gioitinh << endl ;
		cout << "ngay thang nam sinh :" << ds[i].ngaysinh << " " << ds[i].thangsinh << " " << ds[i].namsinh << endl ;
		cout << "chuc vu :" << ds[i].chucvu << endl;
		cout << "bac luong :" << ds[i].luong << endl ;
	}
	
	cout << "sau khi sap xep danh sach la " << endl ;
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(ds[i].luong>ds[j].luong) {
				tg[0] = ds[i] ;
				ds[i] = ds[j] ;
				ds[j] = tg[0] ;
			}
		}
	}
	for(int i=0; i<n; i++) {
		cout << "can bo thu " << i+1 << endl ;
		cout << "ma can bo :" << ds[i].ma << endl ;
		cout << "ho va ten :" << ds[i].ten << endl ;
		cout << "gioi tinh :" << ds[i].gioitinh << endl ;
		cout << "ngay thang nam sinh :" << ds[i].ngaysinh << " " << ds[i].thangsinh << " " << ds[i].namsinh << endl ;
		cout << "chuc vu :" << ds[i].chucvu << endl;
		cout << "bac luong :" << ds[i].luong << endl ;
	}
	return 0;
}

