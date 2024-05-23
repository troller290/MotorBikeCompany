#include "BanhXeD.h"

BanhXeD::BanhXeD(string ms, string hang, int l) : BanhXe(ms, hang, l)
{ 
	dongia = 400;
}

void BanhXeD::Xuat()
{
	BanhXe::Xuat();
	cout << "Loai D" << endl;
	cout << "Gia: " << dongia << endl;
}

int BanhXeD::getGia()
{
	return dongia;
}