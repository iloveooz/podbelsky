//p6-25.cpp - ссылка и указатель на функцию
#include <iostream>

using namespace std;

void func (char c) // определение функции
{ cout << "\n " << c << endl; }

void func1 (char c) // определение функции
{ cout << "\n " << c << endl; }

int main ( )
{
	void (*pf) (char); 			// указатель на функцию
	void (&rf) (char) (func); 	// ссылка на функцию
  
	func('A');  // вызов по имени
  
	pf = func;  // указателю присваивается адрес функции
	(*pf)('B'); // вызов по адресу с помощью указателя
	
	(&rf)('C'); // вызов по ссылке
	return 0;
}

	void (&refFunc) (char) (func);
	//void (&refFunc) (char) (func1); раскомментирование вызовет ошибку
	void (*ptrFunc) (char) (func);
