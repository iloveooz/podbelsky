//Р12-06.СРР - вложение контролируемых блоков и ретрансляция исключений
#include <iostream>

using std::cout;

	// Функция, генерирующая исключения
	void compare(int k) {
		if (k%2 != 0) 
			throw k; // Нечетное значение (odd)
		else
			throw "even"; // Четное значение (even)
	}
	
	// Функция с контролем и обработкой исключении:
	void GG(int j) {
		try {
			// Вложенный контролируемый блок
			try {
				compare(j);
			}
				 
			catch (int n) {
				cout << "\n Odd";
				throw; // Ретрансляция исключения
			}
			
			catch (const char *) { 
				cout << "\n Even"; 
			}
			
		} // Конец внешнего контролируемого блока
	
		// Обработка ретранслированного исключения:
		catch (int i) { cout << "\n Result = " << i; }
	
	} // Конец функции GG()
	
	int main() {
		GG(4);
		GG(7);
		cout << '\n';
		return 0;
	}

