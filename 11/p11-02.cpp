//p11-02.cpp - форматирование выводимой информации
#include <strstream>
#include <iostream>

using namespace std;

int main() {
	char name[] = "Строка длиной 52 символа в поле шириной 58 позиций.";
	cout << "\n\n";
	
	// ширина поля вывода для потока cout
	cout.width(58); 
	
	// символ заполнения пустых позиции поля:
	cout.fill('$');
	
	// первый вывод строки в поток cout:
	cout << name << endl;
	cout.width(58); // убрать нельзя

	// заполнитель между знаком и значением:
	cout.setf(ios::internal);
	
	double dd = -33.4455;
	cout << dd << endl; // вывод вещественного Значения
	cout.width(58); // убрать нельзя

	// смена выравнивания:
	cout.setf(ios::left, ios::adjustfield);

	// символ заполнения пустых позиций поля:
	cout.fill('-') ;

	// второй вывод строки в поток cout:
	cout << name << endl;
	long nn = 90000; // шестнадцатеричное значение 0х15f90

	// смена основания счисления:
	cout.setf(ios::hex, ios::basefield);

	// выводить признак основания счисления:
	cout.setf(ios::showbase);

	// переход на верхний регистр:
	cout.setf(ios::uppercase);
	cout.width(56); // Убрать нельзя
	cout << nn << endl; // вывод целого значения типа long
	cout.width(58); // убрать нельзя

	// смена выравнивания:
	cout.setf(ios::internal, ios::adjustfield);

	// символ заполнения пустых позиций поля:
	cout.fill('$');
	//cout.unsetf(0x0200); // переход на нижний регистр
	cout << nn << endl; // вывод целого значения типа long
	return 0;
}

