//p6-31.cpp - параметр шаблона и внешняя переменная с тем же именем
#include <iostream>

using namespace std;

int N, M; // инициализирована по умолчанию нулевым значением

// функция определяет максимальное значение из двух значений параметров
template <class N>
	N maxelem(N x, N y)
	{
		N a = x;
		cout << "\n Счётчик обращений N = " << ++::N;
		if (a < y) a = y;
		return a;
	}

template <typename M>
	M minelem(M x, M y)
	{
		M a = x;
		cout << "\n Счётчик обращений M = " << ++::M;
		if (a > y) a = y;
		return a;
	}

int main ()
{
	int a = 12, b = 42;
	cout << ' ' << maxelem(a, b);
	cout << ' ' << minelem(a, b);
	
	float z = 66.3, f = 222.4;
	cout << ' ' << maxelem(z, f);
	cout << ' ' << minelem(z, f);
		
	long zz = 66.3, fz = 222.4;
	cout << ' ' << maxelem(zz, fz);
	cout << ' ' << minelem(zz, fz);
	
	cout << ' ' << maxelem(a, b);
	cout << ' ' << minelem(a, b);
	
	cout << ' ' << maxelem(z, f);
	cout << ' ' << minelem(z, f);
		
	cout << ' ' << maxelem(zz, fz);
	cout << ' ' << minelem(zz, fz);
	
	cout << endl;
	return 0;
}
