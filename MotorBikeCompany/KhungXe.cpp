#include "KhungXe.h"

KhungXe::KhungXe(string ms, string hang, int l) : masoKX(ms), hangsx(hang), loai(l), dongia(0)
{}

void KhungXe::Xuat()
{
	cout << "Ma: " << masoKX << endl;
	cout << "Hang: " << hangsx << endl;
}