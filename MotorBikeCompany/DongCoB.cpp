#include "DongCoB.h"

DongCoB::DongCoB(string ms, string hang, int l, int tc) : DongCo(ms, hang, l)
{
	tieuchuan = tc;
	if (tc == 1)
		dongia = 600;
	else if (tc == 2)
		dongia = 700;
	else if (tc == 3)
		dongia = 800;
}

void DongCoB::Xuat()
{
	DongCo::Xuat();
	cout << "Loai B" << endl;
	cout << "Tieu chuan: " << tieuchuan << endl;
	cout << "Gia: " << dongia << endl;
}

int DongCoB::getGia()
{
	return dongia;
}
