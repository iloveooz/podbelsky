//p6-23.cpp - сравнение ссылок с указателями в качестве параметров
#include <iostream>

using namespace std;

// функции, меняющие значения фактических параметров
void changePtr(double *a, double * b)
{
	double c = *a;
	*a = *b; *b = c;
}

void changeRef(double& x, double& y)
{ 
	double z = x;
	x = y; y = z;
}

int main ()
{
	double d = 1.23; // выделяется память для переменной
	double e = 4.56; // выделяется память для переменной

	changePtr(&d, &e);
	cout << "\n d = " << d << "\t\t e = " << e;
	
	changeRef(d, e);
	cout << "\n d = " << d << "\t\t e = " << e << endl;
	return 0;
}
