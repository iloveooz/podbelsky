//p6-17.cpp - определение и использование указателей на функции
#include <iostream>

using namespace std;

void f1()
{
	cout << "\n Выполняется f1()"; }

void f2()
{
	cout << "\n Выполняется f2()"; }

int main ()
{
	void (*ptr)();
	
	ptr = f2;
	(*ptr)();

	ptr = f1;
	(*ptr)();

	ptr();
	cout << endl;
	return 0;
}
