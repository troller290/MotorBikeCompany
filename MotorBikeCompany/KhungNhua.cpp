#include "KhungNhua.h"

KhungNhua::KhungNhua(string ms, string hang, int l) : KhungXe(ms, hang, l)
{
	dongia = 200;
}

void KhungNhua::Xuat()
{
	KhungXe::Xuat();
	cout << "Loai nhua" << endl;
	cout << "Gia: " << dongia << endl;
}

int KhungNhua::getGia()
{
	return dongia;
}
