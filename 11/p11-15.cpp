//p11-15.cpp - ввод и вывод для двунаправленного строкового потока

#include <strstream>
#include <iostream>

using namespace std;

int main() {
	char buffer[180];
	char stroka[150], ss[150];

	// Строковый поток string связан с массивом buffer:
	strstream string(buffer, sizeof(buffer), ios::in | ios::out);
	
	string << "В строковый поток записывается это предложение." << ends;
	
	// Чтение из строкового потока string в массив stroka:
	string.getline(stroka, sizeof(stroka), '\0');
	
	// Вывод в стандартный поток содержимого массива stroka:
	cout << "\n stroka = " << stroka;
	
	// Возвращение позиции чтения/записи к началу потока string:
	string.seekg(0L, ios::beg);
	
	// Чтение из строкового потока до пробельного символа:
	string >> ss;
	cout << "\n ss = " << ss;
	
	string >> ss;
	cout << "\n ss = " << ss;
	
	string.getline(ss, sizeof(ss), '\0');
	cout << "\n ss = " << ss;
	
	cout << endl;
	return 0;
}
