#include <iostream>
#include <cmath>
#include <iomanip>
#include "hlib.h"
using namespace std;

//определение функции дл€ подсчета суммы координат вектора
double Suma(double x[], int n)
{
	//ќбъ€вление переменных 
	double s; int i;
	//вычислени€ 
	s = 0;
	for (i = 0; i < n; i++)
		s = s + x[i];
	return s;
}
//определение функции дл€ подсчета произведени€ векторов
double Proiz(double x[], double y[], int n)
{
	//ќбъ€вление переменных 
	double sp; int i;
	//вычислени€ 
	sp = 0;
	for (i = 0; i < n; i++)
		sp = sp + x[i] * y[i];
	return sp;
}
//определение функции дл€ суммы квадратов координат
double SumKvad(double x[], int n)
{
	//ќбъ€вление переменных 
	double sk; int i;
	//вычислени€ 
	sk = 0;
	for (i = 0; i < n; i++)
		sk = sk + pow(x[i], 2);
	return sk;
}
//определение функции дл€ подсчета суммы координат вектора с логарифмами
double SumaLN(double x[], int n)
{
	//ќбъ€вление переменных 
	double s; int i;
	//вычислени€ 
	s = 0;
	for (i = 0; i < n; i++)
		s = s + log(x[i]);
	return s;
}
//определение функции дл€ подсчета произведени€ векторов с логарифмами
double ProizLN(double x[], double y[], int n)
{
	//ќбъ€вление переменных 
	double sp; int i;
	//вычислени€ 
	sp = 0;
	for (i = 0; i < n; i++)
		sp = sp + log(x[i]) * log(y[i]);
	return sp;
}
//определение функции дл€ суммы квадратов координат с логарифмами
double SumKvadLN(double x[], int n)
{
	//ќбъ€вление переменных 
	double sk; int i;
	//вычислени€ 
	sk = 0;
	for (i = 0; i < n; i++)
		sk = sk + pow(log(x[i]), 2);
	return sk;
}
//определение функции дл€ подсчета произведени€ вектора икс в квадрате на вектор игрек
double ProizKvad(double x[], double y[], int n)
{
	//ќбъ€вление переменных 
	double sp; int i;
	//вычислени€ 
	sp = 0;
	for (i = 0; i < n; i++)
		sp = sp + pow(x[i], 2) * y[i];
	return sp;
}
//определение функции дл€ суммы кубов координат
double SumKub(double x[], int n)
{
	//ќбъ€вление переменных 
	double sk; int i;
	//вычислени€ 
	sk = 0;
	for (i = 0; i < n; i++)
		sk = sk + pow(x[i], 3);
	return sk;
}
//определение функции дл€ суммы иксов в 4 степени координат
double SumTetr(double x[], int n)
{
	//ќбъ€вление переменных 
	double sk; int i;
	//вычислени€ 
	sk = 0;
	for (i = 0; i < n; i++)
		sk = sk + pow(x[i], 4);
	return sk;
}
//ќпределение функции дл€ поиска отрицательной координаты
void PoiskNegEl(double x[], int n, double &p)
{
	// ќбъ€вление переменной
	int i;
	// ¬ычисление
	p = x[0];
	for (i = 1; i < n; i++)
	{
		if (x[i] < 0)
		{
			p = x[i];
			break;
		}
	}
}