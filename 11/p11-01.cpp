//p11-01.cpp - "стандартная" перегрузка операций <<, >> для базовых типов
#include <iostream>

using namespace std;

int main() {
	
	union {
		long integer;
		char line[4];
		float real;
		} mix;
	
	cout << "\n\nВведите целое число (mix.integer): ";
	cin >> mix.integer;

	cout << " mix.integer = " << mix.integer;
	cout << "\n mix.line = " << mix.line;
	cout << "\n mix.real = " << mix.real;

	cout << "\n\nВведите строку (mix.line): ";
	cin >> mix.line;

	cout << " mix.integer = " << mix.integer;
	cout << "\n mix.line = " << mix.line;
	cout << "\n mix.real = " << mix.real;

	cout << "\n\nВведите вещественное число (mix.real): ";
	cin >> mix.real;

	cout << " mix.integer = " << mix.integer;
	cout << "\n mix.line = " << mix.line;
	cout << "\n mix.real = " << mix.real;

	cout << '\n';
	return 0;
}
