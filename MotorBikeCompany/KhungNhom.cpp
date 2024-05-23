#include "KhungNhom.h"

KhungNhom::KhungNhom(string ms, string hang, int l) : KhungXe(ms, hang, l)
{
	dongia = 500;
}

void KhungNhom::Xuat()
{
	KhungXe::Xuat();
	cout << "Loai nhom cach nhiet" << endl;
	cout << "Gia: " << dongia << endl;
}

int KhungNhom::getGia()
{
	return dongia;
}