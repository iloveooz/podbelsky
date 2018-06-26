//p3-08.cpp - инициализация и существование локальных статических объектов
#include <iostream>

using namespace std;

int counter(int x) // Определение функции
{ static int K;   // Статическая переменная, локализованная в теле функции
  cout << "\t x = " << x;
  return ++K;
}

int main(void) {  
	// Прототип функции
	int K = 3, x = 4;          // Локальная переменная функции main
	
	for (; K != 0; K--) {
		cout << "\n Автоматическая K = " << K;
		cout << "\tСчётчик = " << counter(x);
	}

cout << endl;  
return 0;
}
