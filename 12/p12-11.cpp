//p12-11.cpp - "своя" функция обработки ошибок при выполнении операции new и генерации xalloc
#include <stdexcept> // Описание класса xalioc
#include <iostream> // Описание потоков ввода/вывода
#include <new>  // Описание функции set_new_handler
#include <cstring> // Описание класса string

#define SIZE 61440U

using namespace std;

// Функция для обработки ошибок при выполнении операции new:
void new_new_handler () throw (xalloc) {
	// Если память выделить не удалось, формируем исключение xalloc с соответствующими компонентами
	throw(xalloc(string("Memory full"), SIZE));
}

int main(void) {
	// Устанавливаем собственный обработчик ошибок:
	set_new_handler (new_new_handler);
	
	try // Контролируемый блох
	{ 
		for (int n = 1; n < 100000000; n++)
		{ 
			cout << n << ": ";

			new char [SIZE]; // Пытаемся выделить 60 Кбайт
			cout << "Успех!" << endl;
		}
	}
	
	catch (xalloc X) // Обработчик исключений
	{ 
		cout << "Обнаружено исключение " << X.why();
		cout << " при выделении ";
		cout << X.requested() << " байт памяти.";
	}

	cout << endl;
	return 0;
}
