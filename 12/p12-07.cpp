//p12-07.cpp - завершение программы в функции my_handler()

	#include <iostream> // Описание потоков ввода/вывода
	#include <new> // Описание функции set_new_handler()
	#include <stdlib.h> // Описание функции abort()

	using namespace std;

	// Функция для обработки ошибок при выполнении операции new:

	void new_new_handler () {
		cerr << "Ошибка при выделении памяти! ";
		abort(); // Если память выделить невозможно, вызываем функцию abort(), которая завершает программу
		// с выдачей сообщения "Abnormal program termination"
	}
	
	int main(void) {
		
		// Устанавливаем собственный обработчик ошибок:
		set_new_handler (new_new_handler);
		// Цикл с ограничением количества попыток выделения памяти:
		
		for (int n = 1; n <= 10000; n++)
		{ 
			cout << n << ": ";
			new char [128440000000U]; // Пытаемся выделить 60 Кбайт
			cout << "Успех!" << endl;
		}
		return 0;
	}
