#include "DongCoC.h"

DongCoC::DongCoC(string ms, string hang, int l) : DongCo(ms, hang, l)
{ 
	dongia = 400;
}

void DongCoC::Xuat()
{
	DongCo::Xuat();
	cout << "Loai C" << endl;
	cout << "Gia: " << dongia << endl;
}

int DongCoC::getGia()
{
	return dongia;
}