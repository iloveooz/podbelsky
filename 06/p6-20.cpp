//p6-20.cpp - указатель на функцию как параметр функции
#include <iostream>
#include <stdlib.h>

using namespace std;

// определение типа указателя на функцию
typedef float (*pointfunc)(float);

// определение функции для вычисления корня
float root(pointfunc F, float A, float B, float EPS)
{
	float x, y, c, Fx, Fy, Fc;
	x = A; y = B;
	
	Fx = (*F)(x); // значение функции на левой границе интервала
	Fy = (*F)(y); // значение функции на правой границе интервала

	if ( Fx * Fy > 0.0)
    { 
		cout << "\n Неверен интервал локализации!" << endl;
		exit(1);  // аварийное завершение программы
    }
	
	do
  	{
		c = (y - x) / 2; // центр интервала локализации
		Fc = (*F)(c); // значение функции в с
		
		if (Fc * Fx > 0) { x = c; Fx = Fc; }
			else { y = c; Fy = Fc; };

    }	
    while (Fc != 0 && y - x > EPS);
	return c;
}
// определение текстовой функции
float textfunc(float x)	{ return x * x - 1;}

int main ( )
{
	float root(pointfunc, float, float, float); // прототип
	
	float result;
	
	result = root(textfunc, -1.0, 2.0, 1e-5);
  
	cout << "\n Корень текстовой функции: " << result << endl;
	return 0;
}
