#pragma once
#include "iostream"
#include "string"
using namespace std;
class KhungXe
{
protected:
	string masoKX;
	string hangsx;
	int loai;
	int dongia;
public:
	KhungXe(string ms = "", string hang = "", int l = 0);
	virtual void Xuat();
	virtual int getGia() = 0;
};

