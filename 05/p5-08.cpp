//p5-08.cpp - изменения указателей на произвольную величину
#include <iostream>

using namespace std;

int main()
{
	long L1 = 12345678; int i = 6;
	double d = 66.6; long L2 = 87654321;

	cout << "\nНе кратные для long адреса: &L1 = " << &L1 << " &L2 = " << &L2;
	cout << "\nРазность некратных адресов: &L1 - &L2 = " << &L1 - &L2;
	cout << "\n(&L2 + 3) = " << (&L2 + 3);

	int *pi;
	long *p1 = &L1;

	cout << "\np1 = " << p1 << " *p1 = " << *p1;
	//явно переместим указатель
	p1 = (long *) ((long)&L1 - sizeof(int) - sizeof(double) - sizeof(long));
	cout << "\np1 = " << p1 << " *p1 = " << *p1;

	//сформируем значение int * исходя из long *
	pi = (int *) ((long) &L2 + sizeof(long) + sizeof (double));
	cout << "\npi = " << pi << " *pi = " << *pi << endl;
	return 0;
}
