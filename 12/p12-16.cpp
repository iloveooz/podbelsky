//p12-16.cpp - динамическая идентификация типов для полиморфных классов
	#include <iostream>
	#include <typeinfo>

	using namespace std;

	class Alpha
	{ 
		public:
		// Alpha и порожденные из него - RTTI-классы
		virtual void func() {}; // Виртуальная функция делает
	};	 						// класс Alpha полиморфным

	class B : public Alpha {}; //В - тоже RTTI

	int main(void)
	{ 
		B Binst; // Копия класса В
		B *Bptr; // Указатель на класс В
		Bptr = &Binst; // Инициализация указателя
	
	try
	{ 
		// Какого типа *Bptr?
		if (typeid(*Bptr) == typeid(B))
			cout << "Тип " << typeid(*Bptr).name() << ".";
			
		if (typeid(*Bptr) != typeid(Alpha))
			cout << "\nУказатель не типа Alpha." << endl;;
		return 0;
	}
	
	catch (idtype_t)
	{ cout << "Ошибка функции typeid()." << endl;
	return 1;
	}
	
	cout << endl;
	return 0;
}
