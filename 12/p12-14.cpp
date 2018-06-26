//Р12-14.СРР - вызовы деструкторов при исключении
	#include <iostream> // Описание потоком ввода-вьтода
	#include <new> // Описание функции set_new__handler
	#include <cstring> // Описание класса cstring

	using namespace std;

	// Определение класса "блок памяти"
	class Memory {
		char *ptr;
		
		public:
		
		Memory () // Конструктор выделяет 60 Кбайт памяти
		{ ptr = new char [61440U]; }
		
		~Memory () // Деструктор очищает выделенную память
		{ delete ptr; }
	};
	
	// Определение класса "Набор блоков памяти":
	class BigMemory {
		static int nCopy; // Счетчик экземпляров класса + 1
		Memory *MemPtr; // Указатель на класс Memory
		
		public:
		
		// Конструктор с параметром по умолчанию
		BigMemory(int n = 3) {
			cout << endl << nCopy << " : " ;
			MemPtr = new Memory [n];
			cout << "Успех!"; // Если память выделена успешно,
			++nCopy; // увеличиваем счетчик числа экземпляров
		}
		
		~BigMemory () // Деструктор очищает выделенную память
		{ 	cout << endl << --nCopy << ": Вызов деструктора";
			delete [] MemPtr;
		}
	};
	
	// Инициализация статического элемента:
	int BigMemory::nCopy = 1;
	
	// Указатель на старый обработчик для new:
	void (*old_new_handler)();
	
	// Новый обработчик ошибок:
	void new_new_handler() throw(xalloc)
	{ // Печатаем сообщение...
		cout << "Ошибка при выделении памяти!";
		// ... и передаем управление старому обработчику
		(*old_new_handler)();
	}
	
	int main(void)
	{ 
		// Устанавливаем новый обработчик:
		old_new_handler = set_new_handler (new_new_handler);
		try // Контролируемый блок
		{ // Запрашиваем 100 блоков по 60 Кбайт:
			BigMemory Request1(100);
	
			// Запрашиваем 100 блоков по 60 Кбайт:
			BigMemory Request2(100);
	
			// Запрашиваем 100 блоков по 60 Кбайт:
			BigMemory Request3(100);
		}
	
		catch (xmsg& X) // Передача объекта по ссылке
		{ 
			cout << "\nОбнаружено исключение " << X.why();
			cout << " класса " << throwExceptionName;
		}
			set_new_handler (old_new_handler);
	}
