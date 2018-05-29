//p6-30.cpp - шаблон функции для поиска в массиве
#include <iostream>

using namespace std;

// функция определяет ссылку на элемент с максимальным значением

template <class type>
	type & rmax(int n, type* d)
	{
		int im = 0;
		for (int i = 1; i < n; i++)
			im = d[im] > d[i] ? im : i;
		return d[im];
	}

int main ()
{
	int n = 6;
	int x[] = { 10, 20, 30, 14, 99, 38 };
  
	// аргумент - целочисленный массив
	cout << "\n rmax(n, x) = " << rmax(n, x) << endl;
	rmax(n, x) = 0; // обращение с целочисленным массивом
	
	for (int i = 0; i < n; i++)
		cout << "\t x[" << i << "] = " << x[i];
	
	cout << endl;
	
	float arx[] = { 10.3, 20.4, 10.5 };
	
	// аргумент - массив float
	cout << "\n rmax(3, x) = " << rmax(3, arx) << endl;
	rmax(3, arx) = 0; // обращение с массивом типа float
	
	for (int i = 0; i < 3; i++)
		cout << "\t arx[" << i << "] = " << arx[i];
	cout << endl;
	return 0;
}
