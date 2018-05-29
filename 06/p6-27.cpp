//p6-27.cpp - вложенные вызовы функций, возвращающих ссылки

#include <iostream>

using namespace std;

// функция возводит в куб значение параметра и возвращает его адрес
double & rcube(double & z)
{ z = z * z * z * z * z;
  return z; }

// функция изменяет знак параметра и возвращает его адрес
double & rinvert(double & d)
{ d = -d;
  return d; }

// функция возвращает адрес параметра с максимальным значением
double & rmax(double & x, double & y)
{ return x > y ? x : y; }

// функция печатает значение параметра и возвращает его адрес
double & rprint(char * name, double & e)
{ cout << name << e;
  return e; }

int main ( )
{
	double a = 10.0, b = 8.0;
	rprint("\nrcube (rinvert (rmax (a, b))) = ", rcube(rinvert(rmax(a, b)))) = 0.0;
	cout << "\na = " << a << ",\tb = " << b;
	
	rcube(rinvert(rmax(a, b))) = 0.0;
	cout << "\na = " << a << ",\tb = " << b << endl;
	return 0;
}
