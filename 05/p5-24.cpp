//p5-24.cpp - нормализованные указатели - обращение к памяти
#include <iostream>

using namespace std;

int main ()
{
	unsigned huge *ptr = (unsigned huge *)0xf0000000l;
	long unsigned bios_sum = 0;

	// цикл пока указатель отличен от нуля
	while (ptr) bios_sum += *ptr++;

	cout << "\nСумма кодов BIOS : " << bios_sum;
	return 0;
}
