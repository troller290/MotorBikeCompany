#include "XeMay.h"
#include "DongCoA.h"
#include "DongCoB.h"
#include "DongCoC.h"
#include "BanhXeD.h"
#include "BanhXeE.h"
#include "KhungNhom.h"
#include "KhungNhua.h"

void XeMay::NhapXe()
{
	cout << "\n------NHAP THONG TIN XE-----\n";
	cin.ignore();
	cout << "Nhap ma so xe may: "; getline(cin, masoXe);

	cout << "\t[NHAP THONG TIN DONG CO]\t\n";
	dc = NhapDongCo();

	cout << "\t[NHAP THONG TIN BANH XE]\t\n";
	bx1 = NhapBanhXe();

	cout << "\n";
	bx2 = NhapBanhXe();

	cout << "\t[NHAP THONG TIN KHUNG XE]\t\n";
	kx = NhapKhungXe();
}

void XeMay::XuatXe()
{
	cout << "Ma xe: " << masoXe << endl;

	cout << "\t[THONG TIN DONG CO]\t\n";
	dc->Xuat();

	cout << "\t[THONG TIN BANH XE]\t\n";
	bx1->Xuat();
	cout << "\n";
	bx2->Xuat();

	cout << "\t[THONG TIN KHUNG XE]\t\n";
	kx->Xuat();
	cout << "\n--->Gia cua xe may: " << getPrice() << endl;
}

DongCo* XeMay::NhapDongCo()
{
	string ms;
	string hang;
	int loai;
	int tc;
	cout << "Nhap ma so dong co: "; getline(cin, ms);
	cout << "Nhap hang san xuat: "; getline(cin, hang);
	cout << "Nhap loai dong co (1. loai A, 2. loai B, 3. loai C): "; cin >> loai;

	if (loai == 2)
	{
		cout << "Nhap tieu chuan cua dong co B(1,2,3): "; cin >> tc;
		DongCo* input = new DongCoB(ms, hang, loai, tc);
		return input;
	}
	else if(loai == 1)
	{
		DongCo* input = new DongCoA(ms, hang, loai);
		return input;
	}
	else if (loai == 3)
	{
		DongCo* input = new DongCoC(ms, hang, loai);
		return input;
	}
}

BanhXe* XeMay::NhapBanhXe()
{
	string ms;
	string hang;
	int loai;

	cin.ignore();
	cout << "Nhap ma so banh xe: "; getline(cin, ms);
	cout << "Nhap hang san xuat: "; getline(cin, hang);
	cout << "Nhap loai banh xe (1. loai D, 2. loai E): "; cin >> loai;

	if (loai == 1)
	{
		BanhXe* input = new BanhXeD(ms, hang, loai);
		return input;
	}
	else if (loai == 2)
	{
		BanhXe* input = new BanhXeE(ms, hang, loai);
		return input;
	}
	
}

KhungXe* XeMay::NhapKhungXe()
{
	string ms;
	string hang;
	int loai;

	cin.ignore();
	cout << "Nhap ma so khung xe: "; getline(cin, ms);
	cout << "Nhap hang san xuat: "; getline(cin, hang);
	cout << "Nhap loai khung xe (1. nhom, 2. nhua): "; cin >> loai;

	if (loai == 1)
	{
		KhungXe* input = new KhungNhom(ms, hang, loai);
		return input;
	}
	else if (loai == 2)
	{
		KhungXe* input = new KhungNhua(ms, hang, loai);
		return input;
	}
}

int XeMay::getPrice()
{
	return dc->getGia() + bx1->getGia() + bx2->getGia() + kx->getGia();
}