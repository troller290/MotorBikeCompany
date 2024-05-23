#include "DongCo.h"

DongCo::DongCo(string ms, string hang, int l) : masoDC(ms), hangsx(hang), loai(l), dongia(0)
{}

DongCo::~DongCo()
{}

void DongCo::Xuat()
{
	cout << "Ma: " << masoDC << endl;
	cout << "Hang: " << hangsx << endl;
}