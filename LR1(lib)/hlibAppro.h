
#ifndef HLIBAPPRO_H
#define HLIBAPPRO_H

//прототип для функции линейной аппроксимации
void Lineral(double x[], double y[], int n, double &Rl);
//прототип для функции степенной аппроксимации
void Stepen(double x[], double y[], int n, double &Rs);
//определение для функции квадратичной аппроксимации
void Kvad(double x[], double y[], int n, double &Rk);
#endif