#include "BanhXe.h"

BanhXe::BanhXe(string ms, string hang, int l) : masoBX(ms), hangsx(hang), loai(l), dongia(0)
{}

void BanhXe::Xuat()
{
	cout << "Ma: " << masoBX << endl;
	cout << "Hang: " << hangsx << endl;
}