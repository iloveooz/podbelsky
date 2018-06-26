//p11-06.cpp - перегрузка операции ввода >> и вывода <<

#include <iostream>
using namespace std;

// Определение класса "служащий":
struct employee // Определение класса "служащий"
	{
		char name[50]; // Фамилия
		long salary; // Оклад
		int age; // Возраст
	};

	char ss[] = "Merci";

// Определение операции-функции, "распространяющей"
// действие операции ввода >> на операнд типа employee:

istream& // Тип возвращаемого значения
	operator >> (istream& input, employee& em)
		{
			cout << "\n\nВведите сведения о служащем:";
			cout << "\nФамилия: ";
			input >> em.name;
			cout << "Оклад: ";
			input >> em.salary;
			cout << "Возраст: ";
			input >> em.age;
			return input;
		}

//Прототип операции-функции для перегрузки операции <<:
ostream& operator << (ostream&, employee);

int main() { 
	employee E; // Определен объект класса employee
	cin >> E;
	cout << E;
}

// Определение операции-функции для перегрузки
// операции <<:
ostream& operator << (ostream& out, employee e) {
	out << "\nВведены следующие сведения о служащем: ";
	out << "\nИмя: " << e.name;
	out << ", оклад: " << e.salary << " руб.";
	out << ", возраст: " << e.age << " лет.\n";
	
	cout.put('\n').write(ss,sizeof(ss)-1).put('!').put('\n');
	return out;
}
