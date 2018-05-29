//p6-07.cpp - рекурсия при определении корня математической функции
#include <iostream>
#include <cmath>
#include <stdlib.h>  // для функции exit()

using namespace std;

// рекурсивная функция для поиска корня методом деления пополам
double recRoot(double f(double), double a, double b, double eps)
{ 
	double fa = f(a), fb = f(b), c, fc;
	if (fa * fb > 0)
    {
		cout << "\n Неверен интервал локализации корня!";
		exit(1);
    }
	
	c = (a + b) / 2.0;
	fc = f(c);
	
	if (fc == 0.0 || b - a < eps) return c;
	
	return (fa * fc < 0.0) ? recRoot(f, a, c, eps) : recRoot(f, c , b, eps);
}

static int counter = 0; // счётчик обращений к текстовой функции

int main ( )
{
	double root, A = 0.1, // левая граница интервала
	B = 4.5,  // правая граница интервала
	EPS = 5e-8;  // точность локализации корня
	double giper(double); // прототип текстовой функции
	root = recRoot(giper, A, B, EPS);
	cout << "\nЧисло обращений к текстовой функции = " << counter;
	cout << "\nКорень = " << root << endl;
	return 0;
}

// определение текстовой функции
double giper(double x)
{ 
	extern int counter;
	counter++;    // счётчик обращений
	return (2.0 / x * cos(x / 2.0)); 
}
