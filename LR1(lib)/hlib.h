
#ifndef HLIB_H
#define HLIB_H

//прототип для функции суммы координат вектора
double Suma(double x[], int n);
//прототип для скалярного произведения векторов
double Proiz(double x[], double y[], int n);
//прототип функции для подсчета суммы квадратов координат
double SumKvad(double x[], int n);
//прототип функции для подсчета суммы координат вектора с логарифмами
double SumaLN(double x[], int n);
//прототип функции для подсчета произведения векторов с логарифмами
double ProizLN(double x[], double y[], int n);
//прототип функции для суммы квадратов координат с логарифмами
double SumKvadLN(double x[], int n);
//определение функции для подсчета произведения вектора икс в квадрате на вектор игрек
double ProizKvad(double x[], double y[], int n);
//определение функции для суммы кубов координат
double SumKub(double x[], int n);
//определение функции для суммы иксов в 4 степени координат
double SumTetr(double x[], int n);
//Определение функции для поиска отрицательной координаты 
void PoiskNegEl(double x[], int n, double &p);

#endif