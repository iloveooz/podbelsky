//p11-05.cpp - перегрузка операции ввода >>
#include <iostream>

using namespace std;

struct point // Точка трехмерного евклидова пространства
{ 
	float x;
	float y;
	float z;
};

ostream& operator << (ostream& out, point d) {
		out << "\n Введённые вами координаты точки:";
		out << "\nx = " << d.x;
		out << "\ny = " << d.y;
		out << "\nz = " << d.z;
		return out;
	}

istream& // Тип возвращаемого значения
	operator >> (istream& in, point& d) {
		cout << "\n Введите три координаты точки: \n";
		cout << "x = "; in >> d.x;
		cout << "y = "; in >> d.y;
		cout << "z = "; in >> d.z;
		return in;
	}
	
int main() {
	point D;
	cin >> D;
	cout << "==========" << '\n';
	cout << D << '\n';
	return 0;
}
