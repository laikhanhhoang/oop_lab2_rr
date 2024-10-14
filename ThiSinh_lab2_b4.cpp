#include <bits/stdc++.h>
#include "ThiSinh_lab2_b4.h"
using namespace std;

void ThiSinh::Nhap() {
    cout << "Nhap ten: ";
    getline(cin, Ten);
    cout << "Nhap MSSV: ";
    getline(cin, MSSV);
    cout << "Nhap ngay sinh: ";
    cin >> iNgay;
    cout << "Nhap thang sinh: ";
    cin >> iThang;
    cout << "Nhap nam sinh: ";
    cin >> iNam;
    cout << "Nhap diem Toan: ";
    cin >> fToan;
    cout << "Nhap diem Van: ";
    cin >> fVan;
    cout << "Nhap diem Anh: ";
    cin >> fAnh;
    cin.ignore();
}

void ThiSinh::Xuat() const {
    cout << "Ten: " << Ten << ", MSSV: " << MSSV << ", Ngay sinh: " 
         << iNgay << "/" << iThang << "/" << iNam << ", Diem Toan: " 
         << fToan << ", Diem Van: " << fVan << ", Diem Anh: " << fAnh << endl;
}

float ThiSinh::Tong() const {
    return fToan + fVan + fAnh;
}

