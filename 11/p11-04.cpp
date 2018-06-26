//p11-04.cpp - вывод информации о структуре-строке

#include <iostream>
#include <string.h> 
#include <stdlib.h>  // malloc()

using namespace std;

// Определение класса (пользовательского типа):
struct string1 {
	int length;
	char *line;
};

// Прототип операции-функции для перегрузки операции <<:
ostream& operator << (ostream& out, string1 str);

int main() {
	string1 st; // Объект st класса string1

	strcpy(st.line, "Содержимое строки.");
	st.length = strlen(st.line);
	cout << st;
}

ostream& // Тип возвращаемого значения
operator << (ostream& out, string1 str) {
	out << "\n Длина строки: " << str.length;
	out << "\n Значение строки: " << str.line;
	return out;
}
