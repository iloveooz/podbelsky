//p11-17.cpp - чтение текстового файла с помощью операции >>
#include <stdlib.h> // Для функции exit()
#include <fstream> // Для файловых потоков
#include <iostream>

using namespace std;

const int lenName = 25; // max длина имени файла

// Длина вспомогательного массива:
const int lenString = 80;

int main() { 
	char source[lenName]; // Массив для имени файла
	cout << "\nВведите имя исходного файла: ";
	cin >> source;
	
	ifstream inFile; // Входной файловый поток
	
	// Открыть файл source и связать его с потоком inFile:
	inFile.open(source);
	if (!inFile) // Проверить правильность открытия файла
	{ 
		cerr << "\nОшибка при открытии файла " << source << endl;
		exit(1); // Завершение программы
	}
	
	// Вспомогательный массив для чтения:
	char string[lenString];
	char next;
	
	cout << "\n Текст файла:\n\n";
	
	//cin.get(); // Убирает код из потока cin
	while(1) // Неограниченный цикл
	{ 
		// Ввод из файла одного слова до пробельного символа либо EOF:
		//inFile >> string;
		inFile.getline(string, lenString);
		
		// Проверка следующего символа:
		next = inFile.peek();
		
		// Выход при достижении конца файла:
		if (next == EOF) break;
		
		// Печать с добавлением разделительного пробела
		cout << string;
	
		if (next == '\n') // Обработка конца строки
		{ 
			cout << '\n';
			// 4 - смещение для первой страницы экрана
			static int i = 4;
	
			// Деление по страницам до 20 строк каждая
			if (!(++i % 10))
			{ 
				cout << "\nДля продолжения вывода нажмите ENTER.\n" << endl;
				cin.get();
			}
		}
	}
}
