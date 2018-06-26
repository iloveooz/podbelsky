//p3-12.cpp - обмен между функциями через внешние переменные
#include <iostream>

using namespace std;

int x;  // определение глобальной переменной

int main() {
	void func(void); // необходимый прототип функции
	
	extern int x;    // излишнее описание
	x = 4;
	func();
	cout << "\nx = " << x << endl;
	return 0;
}

void func(void) {
	extern int x;  // излишнее описание 
	x = 2;
}
