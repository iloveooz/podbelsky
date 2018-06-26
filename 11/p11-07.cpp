//p11-07.cpp - строковые потоки, операция извлечения >>
// Автоматически включается файл iostream:
#include <strstream>
#include <iostream>

using namespace std;

int main()
{ 
	// Выделена область памяти (строка):
	char *stroka = "123.5 Salve! 777";
	
	// Создан входной строковый поток instr:
	istrstream instr(stroka);

	char array[10];
	double real;
	int num;

	// Извлекаем информацию ид строкового потока:
	instr >> real >> array >> num;

	// Вывод на экран:
	cout << "\narray = " << array << " real = " << real << " int = " << num << endl;
	return 0;
}
