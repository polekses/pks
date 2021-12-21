#include <iostream>
#include <iomanip>
#include "hlib_osnfun.h"
using namespace std;

//определение функции ввода вектора
void inputv(double x[], int n)
{//объ€вление переменной
	int i;
	//ввод
	for (i = 0; i<n; i++)
	{
		cin >> x[i];
	}
}
//определение функции вывода вектора
void outputv(double x[], int n)
{//объ€вление переменных
	int i;
	//вывод
	for (i = 0; i<n; i++)
	{
		if (i % 15 == 0) cout << endl;
		cout << setw(10) << x[i];
	}
}