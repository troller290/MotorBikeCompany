#pragma once
#include "DongCo.h"
class DongCoB : public DongCo
{
private:
	int tieuchuan;
public:
	DongCoB(string ms = "", string hang = "", int l = 0, int tc = 0);
	void Xuat();
	int getGia();
};

