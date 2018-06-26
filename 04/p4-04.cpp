//p4-04.cpp - оператор break в переключателе
#include <iostream>

using namespace std;

int main()
{ 
	int ic;

	cout << "\nВведите восьмеричную цифру: ";
	cin >> ic;

	cout << '\n' << ic;

	switch (ic)
	{ 
		case 0: cout << " - Ноль ";break;
		case 1: cout << " - Один"; break;
		case 2: cout << " - Два"; break;
		case 3: cout << " - Три"; break;
		case 4: cout << " - Четыре"; break;
		case 5: cout << " - Пять"; break;
		case 6: cout << " - Шесть"; break;
		case 7: cout << " - Семь"; break;
		
		default: cout << "\nОшибка! Это не восьмеричная цифра!";
	}
	
	cout << "\nКонец выполнения программы" << endl;
	return 0;
}
