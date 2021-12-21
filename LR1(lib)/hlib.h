
#ifndef HLIB_H
#define HLIB_H

//�������� ��� ������� ����� ��������� �������
double Suma(double x[], int n);
//�������� ��� ���������� ������������ ��������
double Proiz(double x[], double y[], int n);
//�������� ������� ��� �������� ����� ��������� ���������
double SumKvad(double x[], int n);
//�������� ������� ��� �������� ����� ��������� ������� � �����������
double SumaLN(double x[], int n);
//�������� ������� ��� �������� ������������ �������� � �����������
double ProizLN(double x[], double y[], int n);
//�������� ������� ��� ����� ��������� ��������� � �����������
double SumKvadLN(double x[], int n);
//����������� ������� ��� �������� ������������ ������� ��� � �������� �� ������ �����
double ProizKvad(double x[], double y[], int n);
//����������� ������� ��� ����� ����� ���������
double SumKub(double x[], int n);
//����������� ������� ��� ����� ����� � 4 ������� ���������
double SumTetr(double x[], int n);
//����������� ������� ��� ������ ������������� ���������� 
void PoiskNegEl(double x[], int n, double &p);

#endif