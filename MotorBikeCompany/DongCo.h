#pragma once
#include "iostream"
#include "string"
using namespace std;
class DongCo
{
protected:
	string masoDC;
	string hangsx;
	int loai;
	int dongia;
public:
	DongCo(string ms = "", string hang = "", int l = 0);
	~DongCo();
	virtual void Xuat();
	virtual int getGia() = 0;
};

