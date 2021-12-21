#include <iostream>
#include <cmath>
#include <iomanip>
#include "E:\TP\LR1\LR1(lib)\hlibAppro.h"
#include "E:\TP\LR1\LR1(lib)\hlib_osnfun.h"
#include "E:\TP\LR1\LR1(lib)\hlib.h"
//#include "hosn.h"

using namespace std;
void main()
{
	//�����������
	setlocale(LC_ALL, "rus");
	//���������� ����������
	double Rl, Rs, Rk, minus1, minus2;
	double *x, *y;
	int n;
	//���� ����������
	cout << "\n������� ���������� ��������� n\n";
	cin >> n;
	x = new double[n];
	y = new double[n];
	cout << "\n������� ������ ������\n";
	inputv(x, n);
	cout << "\n������� ������ ������\n";
	inputv(y, n);
	//����� �������
	cout << "\n������ ������:\n";
	outputv(x, n);
	cout << "\n������ ������:\n";
	outputv(y, n);
	PoiskNegEl(x, n, minus1);
	PoiskNegEl(y, n, minus2);
	//�������� �������������
	Lineral(x, y, n, Rl);
	if (minus1 < 0 || minus2 < 0)
	{
		cout << "\n���� ������������� ��������. ���������� ��������� ������������� ����������.";
		cout << "\n������ � ������� ������������ �������������? ����� ����� ������ ������������ � MATLAB. ������� y ��� �� ��� n ��� ���." << endl;
		char s;
		cin >> s;
		if (s == 'y')
		{
			Kvad(x, y, n, Rk);
			if (Rk > Rl)
			{
				cout << "\n������������ ������������� ����� �����";
			}
			else cout << "\n�������� ������������� ����� �����";
		}
		else if (s == 'n') cout << "\n�������� ������������� ����� �����, ������ ��� ���������� ��������� ������������� ����������, � ������������ �� ������ �� ������������";
		else cout << "\n������ ������ y ��� n\n";
	}
	else
	{
		Stepen(x, y, n, Rs);
		cout << "\n������ � ������� ������������ �������������? ����� ����� ������ ������������ � MATLAB. ������� y ��� �� ��� n ��� ���." << endl;
		char s;
		cin >> s;
		if (s == 'y')
		{
			Kvad(x, y, n, Rk);
			if (Rk > Rl && Rk > Rs)
			{
				cout << "\n������������ ������������� ����� �����";
			}
			else if (Rl > Rk && Rl > Rs) cout << "\n�������� ������������� ����� �����";
			else if (Rs > Rl && Rs > Rk) cout << "\n��������� ������������� ����� �����";
		}
		else if (s == 'n')
		{
			if (Rl > Rs) cout << "\n�������� ������������� ����� �����";
			else cout << "\n�������� ������������� ����� �����";
		}
		else cout << "\n������ ������ y ��� n\n";
	}
	cout << endl;

}