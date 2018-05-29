//p6-03.cpp - индексация конца переменного списка параметров
#include <iostream>

using namespace std;

// фукнция вычисляет произведение параметров
double prod (double arg, ...)
{	double aa = 1.0;  // формируемое произведение
	double *ptr = &arg;  // настроили указатель на первый параметр
	
	if (*ptr == 0.0) return 1.0;
	for(; *ptr; ptr++) aa *= *ptr;
	return aa;
}

int main ()
{	double prod(double, ...); // прототип функции
  
	cout << "\n\n prod(2e0, 4e0, 3e0, 0e0) = " << prod(2e0, 4e0, 3e0, 0e0);
	cout << "\n\n prod(1.5, 2.0, 3.0, 0.0) = " << prod(1.5, 2.0, 3.0, 0.0);
	cout << "\n\n prod(1.4, 3.0, 0.0, 16.0, 84.3, 0.0) = " << prod(1.4, 3.0, 0.0, 16.0, 84.3, 0.0);
	cout << "\n\n prod(0e0) = " << prod(0e0) << endl;
	return 0;
}
