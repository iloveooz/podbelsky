//p11-16.cpp - перегрузка операций обмена (<<, >>) и двунаправленный строковый поток ввода-вывода
#include <strstream>
#include <iostream>

using namespace std;

const int lenLink = 200; // Глобальная константа
char Link[lenLink]; // Глобальный символьный массив

// Строковый поток obmen связан с массивом Link:
strstream obmen(Link, sizeof(Link), ios::in | ios::out);

struct element {
	int nk, nl;
	float zn;
};

strstream& operator >> (strstream& in, element& el) {
	in >> el.nk; 
	in >> el.nl; 
	in >> el.zn;
	return in;
};

strstream& operator << (strstream& out, element& el) {
	out << ' ' << el.nk << ' ' << el.nl << ' ' << el.zn;
	return out;
};

// Функция чтения из потока и вывода на экран:
void result(void) {
	element zuar;
	int numb;
	obmen >> numb;

	cout << "\nnumb = " << numb;
	
	for(int j = 0; j < numb; j++) {
		obmen >> zuar;
		cout << "\nelement[" << j << "] = ";
		cout << zuar.nk << '\t' << zuar.nl << '\t' << zuar.zn;
	}
}

int main() {
	//char buffer[180];
	const int numbeEl = 5;
	
	element arel[numbeEl] = { 1, 2, 3.45, 2, 3, 4.56, 22, 11, 45.6, 3, 24, 4.33, 3, 6, -5.3 };

	// Запись в строковый поток:
	obmen << numbeEl;
	
	for (int i = 0; i < numbeEl; i++) obmen << arel[i];
	obmen << '\0';
	result();
	cout << endl;
	return 0;
}
