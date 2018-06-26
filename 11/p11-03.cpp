//p11-03.cpp - перегрузка операции вывода "<<"
#include <iostream>

using namespace std;

// Почтовый адрес
struct address { 
	char *country; // Страна
	char *city; // Город
	char *street; // Улица
	int number_of_house; // Номер дома
};

	// Определение операции-функции, "распространяющей"
	// действие операции включения в поток << на операнд
	// типа address:

	ostream& // Тип возвращаемого значения
	operator << (ostream& out, address ad)
	{ 
		out << "\nCountry: " << ad.country;
		out << "\nCity: " << ad.city;
		out << "\nStreet: " << ad.street;
		out << "\nHouse: " << ad.number_of_house;
		return out;
	}

int main() {
	address ad = { "Russia", "Moscow", "Arbat", 11 };
	cout << "\nЗначение структуры (почтовый адрес):";
	cout << ad << "\n";
	return 0;
}
