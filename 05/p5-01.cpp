//p5-01.cpp - проверка типа компьютера (обращение к байту памяти)

// Значением указателя служит адрес участка памяти, выделенного для объекта конкретного типа

#include <iostream>

using namespace std;

int main(void)
{  
	char *computer = (char *)0xF000FFFE;
	cout << "\nПрограмма выполняется на " << *computer;
	
	switch (*computer)
	{
		case (char)0xFF: cout << "ПЭВМ типа IBM PC." << endl; break;
		case (char)0xFE: cout << "ПЭВМ типа IBM PC XT." << endl; break;
		case (char)0xFD: cout << "ПЭВМ типа IBM PCjr." << endl; break;
		case (char)0xFC: cout << "ПЭВМ типа IBM PC AT." << endl; break;

		default: cout << "ПЭВМ неизвестного типа ." << endl;
	}

	if (*computer == 0xFF) cout << "\n " << "PC" << endl;
	return 0;
}
