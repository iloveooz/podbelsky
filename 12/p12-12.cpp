//p12-12.cpp - замена стандартной функции terminate()

#include <stdlib.h> // Для функции abort()
#include <stdexcept> // Для функции поддержки исключений
#include <iostream> // Для потоком ввода-вывода

using namespace std;

// Указатель на предыдущую функцию terminate:
void (*old_terminate) ();

// Новая функция обработки неопознанного исключения:
void new_terminate()
{ 
	cout << "\n Вызвана функция new_terminate()";
	
	// ... Действия, которые необходимо выполнить
	// ... до завершения программы

	abort(); // Завершение программы
}

int main()
{ 
	// Установка своей функции обработки:
	old_terminate = set_terminate (new_terminate) ;
	// Генерация исключения вне контролируемого блока:
	throw(25);
	cout << endl;
	return 0;
}
