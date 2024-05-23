#pragma once
#include "KhungXe.h"
class KhungNhom : public KhungXe
{
public:
	KhungNhom(string ms = "", string hang = "", int l = 0);
	void Xuat();
	int getGia();
};

