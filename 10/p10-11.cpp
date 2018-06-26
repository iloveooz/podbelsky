//p1О-11.cpp - формирование классов с помощью шаблона
	// шаблон классов "вектор"
	#include "template.vec" 
	#include <iostream>
	
	using std::cout;
	
	int main() {
		// создаем объект класса "целочисленный вектор":
		Vector <int> X(5);
		
		// создаем объект класса "символьный вектор":
		Vector <char> C(5);
		
		// создаем объект класса "double вектор":
		Vector <double> D(5);

		// Определяем компоненты векторов:
		for (int i = 0; i < 5; i++) {
			X[i] = i; 
			C[i] = 'A' + i;
			D[i] = i / 3;
		}

		for (int i = 0; i < 5 ; i++) cout << "   " << X[i] << ' ' << C[i] << ' ' << D[i] << '\n';
		return 0;
	}
