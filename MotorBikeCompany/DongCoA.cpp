#include "DongCoA.h"

DongCoA::DongCoA(string ms, string hang, int l) : DongCo(ms, hang, 1)
{
	dongia = 500;
}

void DongCoA::Xuat()
{
	DongCo::Xuat();
	cout << "Loai A" << endl;
	cout << "Gia: " << dongia << endl;
}

int DongCoA::getGia()
{
	return dongia;
}
