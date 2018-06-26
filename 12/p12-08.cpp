//Р12-08.СРР - модификация p12-07.cpp
	#include <iostream> // Описание потоков ввода/вывода
	#include <new> // Описание функции set_new_handler()
	#include <stdlib.h> // Описание функции abort()

	using namespace std;

	// Прототип функции - старого обработчика ошибок распределения памяти:
	void (*old_new_handler) ();
	
	void new_new_handler () // Функция для обработки ошибок
	{ 
		cerr << "Ошибка при выделении памяти! ";
	if (old_new_handler) (*old_new_handler) ();
	abort(); // Если память выделить невозможно, вызываем функцию abort(), которая завершает программу
	// с выдачей сообщения "Abnormal program termination"
	}

	int main(void)
	{ // Устанавливаем собственный обработчик ошибок:
	old_new_handler = set_new_handler(new_new_handler) ;
	// Цикл с ограничением количества попыток выделения памяти:
	for (int n = 1; n <= 1000; n++)
	{ cout << n << ": ";
	new char [120400000000U]; // Пытаемся выделить 60 Кбайт
	cout << "Успех!" << endl;
	}
	return 0;
	}
