#include "BanhXeE.h"

BanhXeE::BanhXeE(string ms, string hang, int l) : BanhXe(ms, hang, l)
{
	dongia = 300;
}

void BanhXeE::Xuat()
{
	BanhXe::Xuat();
	cout << "Loai E" << endl;
	cout << "Gia: " << dongia << endl;
}

int BanhXeE::getGia()
{
	return dongia;
}