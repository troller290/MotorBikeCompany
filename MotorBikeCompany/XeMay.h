#pragma once
#include "DongCo.h"
#include "BanhXe.h"
#include "KhungXe.h"
class XeMay
{
private:
	string masoXe;
	DongCo* dc;
	BanhXe* bx1;
	BanhXe* bx2;
	KhungXe* kx;
public:
	void NhapXe();
	void XuatXe();
	int getPrice();

	DongCo* NhapDongCo();
	BanhXe* NhapBanhXe();
	KhungXe* NhapKhungXe();
};

