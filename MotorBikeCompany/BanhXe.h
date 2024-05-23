#pragma once
#include "iostream"
#include "string"
using namespace std;
class BanhXe
{
protected:
	string masoBX;
	string hangsx;
	int loai;
	int dongia;
public:
	BanhXe(string ms = "", string hang = "", int l = 0);
	virtual void Xuat();
	virtual int getGia() = 0;
};

