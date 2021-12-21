#include <iostream>
#include <cmath>
#include <iomanip>
#include "hlib.h"
using namespace std;

//����������� ������� ��� �������� ����� ��������� �������
double Suma(double x[], int n)
{
	//���������� ���������� 
	double s; int i;
	//���������� 
	s = 0;
	for (i = 0; i < n; i++)
		s = s + x[i];
	return s;
}
//����������� ������� ��� �������� ������������ ��������
double Proiz(double x[], double y[], int n)
{
	//���������� ���������� 
	double sp; int i;
	//���������� 
	sp = 0;
	for (i = 0; i < n; i++)
		sp = sp + x[i] * y[i];
	return sp;
}
//����������� ������� ��� ����� ��������� ���������
double SumKvad(double x[], int n)
{
	//���������� ���������� 
	double sk; int i;
	//���������� 
	sk = 0;
	for (i = 0; i < n; i++)
		sk = sk + pow(x[i], 2);
	return sk;
}
//����������� ������� ��� �������� ����� ��������� ������� � �����������
double SumaLN(double x[], int n)
{
	//���������� ���������� 
	double s; int i;
	//���������� 
	s = 0;
	for (i = 0; i < n; i++)
		s = s + log(x[i]);
	return s;
}
//����������� ������� ��� �������� ������������ �������� � �����������
double ProizLN(double x[], double y[], int n)
{
	//���������� ���������� 
	double sp; int i;
	//���������� 
	sp = 0;
	for (i = 0; i < n; i++)
		sp = sp + log(x[i]) * log(y[i]);
	return sp;
}
//����������� ������� ��� ����� ��������� ��������� � �����������
double SumKvadLN(double x[], int n)
{
	//���������� ���������� 
	double sk; int i;
	//���������� 
	sk = 0;
	for (i = 0; i < n; i++)
		sk = sk + pow(log(x[i]), 2);
	return sk;
}
//����������� ������� ��� �������� ������������ ������� ��� � �������� �� ������ �����
double ProizKvad(double x[], double y[], int n)
{
	//���������� ���������� 
	double sp; int i;
	//���������� 
	sp = 0;
	for (i = 0; i < n; i++)
		sp = sp + pow(x[i], 2) * y[i];
	return sp;
}
//����������� ������� ��� ����� ����� ���������
double SumKub(double x[], int n)
{
	//���������� ���������� 
	double sk; int i;
	//���������� 
	sk = 0;
	for (i = 0; i < n; i++)
		sk = sk + pow(x[i], 3);
	return sk;
}
//����������� ������� ��� ����� ����� � 4 ������� ���������
double SumTetr(double x[], int n)
{
	//���������� ���������� 
	double sk; int i;
	//���������� 
	sk = 0;
	for (i = 0; i < n; i++)
		sk = sk + pow(x[i], 4);
	return sk;
}
//����������� ������� ��� ������ ������������� ����������
void PoiskNegEl(double x[], int n, double &p)
{
	// ���������� ����������
	int i;
	// ����������
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