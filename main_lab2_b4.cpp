#include <bits/stdc++.h>
#include "ThiSinh_lab2_b4.h"
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    cin.ignore();

    ThiSinh* ds = new ThiSinh[n];

    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin thi sinh " << (i + 1) << ":" << endl;
        ds[i].Nhap();
    }

    cout << "\nThi sinh co tong diem > 15:" << endl;
    for (int i = 0; i < n; i++) {
        if (ds[i].Tong() > 15) {
            ds[i].Xuat();
        }
    }

    float maxScore = 0;
    int indexMax = -1;
    for (int i = 0; i < n; i++) {
        if (ds[i].Tong() > maxScore) {
            maxScore = ds[i].Tong();
            indexMax = i;
        }
    }

    if (indexMax != -1) {
        cout << "\nThi sinh co diem cao nhat:" << endl;
        ds[indexMax].Xuat();
    }

    delete[] ds;
    return 0;
}

