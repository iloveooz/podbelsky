//p12-15.cpp - идентификация и сравнение типов объектов
#include <typeinfo>
#include <iostream>

using namespace std;

int main() {
	char szString[10];
	long double floatVar;
	
	cout << typeid(szString).name() << ", " << typeid(floatVar).name();
	cout << endl << typeid(szString).before(typeid(floatVar));
	cout << endl;
	return 0;
}
