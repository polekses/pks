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
	//русификация
	setlocale(LC_ALL, "rus");
	//объявление переменных
	double Rl, Rs, Rk, minus1, minus2;
	double *x, *y;
	int n;
	//ввод переменных
	cout << "\nВведите количество координат n\n";
	cin >> n;
	x = new double[n];
	y = new double[n];
	cout << "\nВведите первый вектор\n";
	inputv(x, n);
	cout << "\nВведите второй вектор\n";
	inputv(y, n);
	//вывод вектора
	cout << "\nПервый вектор:\n";
	outputv(x, n);
	cout << "\nВторой вектор:\n";
	outputv(y, n);
	PoiskNegEl(x, n, minus1);
	PoiskNegEl(y, n, minus2);
	//линейная аппроксимация
	Lineral(x, y, n, Rl);
	if (minus1 < 0 || minus2 < 0)
	{
		cout << "\nЕсть отрицательные значения. Применение степенной аппроксимации невозможно.";
		cout << "\nРешаем с помощью квадратичной аппроксимации? Нужно будет искать коэффициенты в MATLAB. Введите y для ДА или n для НЕТ." << endl;
		char s;
		cin >> s;
		if (s == 'y')
		{
			Kvad(x, y, n, Rk);
			if (Rk > Rl)
			{
				cout << "\nКвадратичная аппроксимация более точна";
			}
			else cout << "\nЛинейная аппроксимация более точна";
		}
		else if (s == 'n') cout << "\nЛинейная аппроксимация более точна, потому что применение степенной аппроксимации невозможно, а квадратичную вы решили не использовать";
		else cout << "\nПишите только y или n\n";
	}
	else
	{
		Stepen(x, y, n, Rs);
		cout << "\nРешаем с помощью квадратичной аппроксимации? Нужно будет искать коэффициенты в MATLAB. Введите y для ДА или n для НЕТ." << endl;
		char s;
		cin >> s;
		if (s == 'y')
		{
			Kvad(x, y, n, Rk);
			if (Rk > Rl && Rk > Rs)
			{
				cout << "\nКвадратичная аппроксимация более точна";
			}
			else if (Rl > Rk && Rl > Rs) cout << "\nЛинейная аппроксимация более точна";
			else if (Rs > Rl && Rs > Rk) cout << "\nСтепенная аппроксимация более точна";
		}
		else if (s == 'n')
		{
			if (Rl > Rs) cout << "\nЛинейная аппроксимация более точна";
			else cout << "\nСтпенная аппроксимация более точна";
		}
		else cout << "\nПишите только y или n\n";
	}
	cout << endl;

}