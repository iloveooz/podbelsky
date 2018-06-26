//p12-13.cpp - Использование глобальных переменных __throwExceptionName, __throwFileName и __throwLineNumber

	#include <stdexcept> // Описание переменных __throwXXXX
	#include <iostream> // Описание потоком ввода-вывода
	
	using namespace std;
	
	class A // Определяем класс А
	{ 
		public:
	
		void print() // Функция печати сведении об исключении
		{ 
			cout << "Обнаружено исключение ";
			cout << __throwExceptionName;
	
			cout << " в строке " << __throwLineNumber;
			cout << " файла '" << __throwFileName << "'" << endl;
		}
	};
	
	class B: public A {}; // Класс В порождается из А
	class C: public A {}; // Класс С порождается из А
	
	C _c; // Создан объект класса С
	
	void f () // Функция может порождать любые исключении
	{ 
		try
		{ // Формируем исключение (объект класса С):
			throw(_c);
		}
	
		catch (B X) // Здесь обрабатываются исключения типа В
		{ X.print(); }
	}
	
	int main () {
		try { 
			f(); } // Контролируемый блох
	
		// Обрабатываются исключения типа А (и порожденных от него):
	
		catch (A X) {
			X.print(); }; // Обнаружено исключение
		
		cout << endl;
		return 0;
		}
