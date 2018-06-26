//p4-02.cpp - названия нечётных целых цифрб не меньших заданной
#include <iostream>

using namespace std;

int main()
{	int ic;
	cout << "\nВведите любую десятичную цифру: ";
	cin >> ic;
	cout << '\n';
  
	switch (ic)
	{
		case 0: case 1: cout << "Один, " << endl; break;
		case 2: case 3: cout << "Три, " << endl; break;
		case 4: case 5: cout << "Пять, " << endl; break;
		case 6: case 7: cout << "Семь, " << endl; break;
		case 8: case 9: cout << "Девять, " << endl; break;
		case 10: case 11: cout << "Одиннадцать, " << endl; break;
		case 12: case 13: cout << "Тринадцать, " << endl; break;
		case 14: case 15: cout << "Пятнадцать, " << endl; break;
		case 16: case 17: cout << "Семнадцать, " << endl; break;
		case 18: case 19: cout << "Девятнадцать. " << endl;
        
        break; // выход из переключателя
		default: cout << "Ошибка! Это не цифра!";
	}       //конец переключателя
    
return 0;
}
