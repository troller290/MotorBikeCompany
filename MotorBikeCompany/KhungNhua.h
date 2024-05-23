#pragma once
#include "KhungXe.h"
class KhungNhua : public KhungXe 
{
public:
	KhungNhua(string ms = "", string hang = "", int l = 0);
	void Xuat();
	int getGia();
};

