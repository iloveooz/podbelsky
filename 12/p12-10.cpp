//p12-10.cpp - обработка исключения типа xalloc
#include <stdexcept> // Описание класса xalloc
#include <iostream> // Описание потоков ввода/вывода
#include <cstring> //Описание класса string

using namespace std;

int main (void) {
	try {
		//Цикл с ограничением количества попыток выделения памяти:
		for (int n = 1; n <= 100000000; n++) {
			cout << n << ": ";
			new char [61440U]; // Пытаемся выделить 60 Кбайт
			cout << "Успех!" << endl;
		}
	}
	
	catch (xalloc X) {
		cout << "При выделении памяти обнаружено исключение" << X.why();
	}
}
