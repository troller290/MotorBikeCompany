#include "CongTy.h"

void CongTy::Input()
{
	int n;
	cout << "Nhap so luong xe may cua cong ty: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		XeMay bike;
		bike.NhapXe();
		dsach.push_back(bike);
	}
}

void CongTy::Output()
{
	for (int i = 0; i < dsach.size(); i++)
	{
		cout << "\n\t----THONG TIN XE " << i + 1 << "-----\t\n";
		dsach[i].XuatXe();
	}
}

void CongTy::ghiFile()
{
	FILE* stream;
	freopen_s(&stream, "danh_sach_xe_may.txt", "w", stdout);
	Output();
}