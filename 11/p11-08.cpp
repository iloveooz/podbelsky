//p11-08.cpp - входной строковый поток; 
// чтение аргумента функции main ()

#include <strstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) // Определены аргументы
{
	char name[40]; // Выделяется область памяти

	// Создает строковый поток input:
	istrstream input(argv[0]);

	// Извлекаем информацию из строкового потока:
	input >> name;

	// Вывод в стандартный поток (на экран):
	cout << "\nПри вызове аргумент = " << name << endl;
	return 0;
}
