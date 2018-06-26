	//p11-18.cpp - выделение комментариев из текста на Си++;
	// посимвольные чтение и запись из текстового файла

	#include <stdlib.h>
	#include <fstream>
	#include <iostream>

	using namespace std;

	// вспомогательная функция
		void errorF(char *ss) { 
			cerr << "\n Ошибка при открытии файла " << ss << '\n';
			exit(1);
		}
	
	// длина массива для имени файла
		const int lenName = 23;
	 
	int main() {
		// массив для имени файла
			char progName[lenName]; 
		
			cout << "\n Введите полное имя анализируемой программы: ";
			cin >> progName;
		
		// входной поток
			ifstream inFile; 
		
		// связываем входной поток с файлом программы:
			inFile.open(progName);
		
		if (!inFile) errorF(progName);
		
		// вспомогательные переменные
			char simb, last, next; 
		
		// два выходных потока
			ofstream outtext, outcom; 
		
		// переменная для вычисления длин строк программы:
			int len = 0;
		
			outtext.open("p11-18-c.cpp",ios::ate);
				if (!outtext) errorF("p11-18-c.cpp");
		
			outcom.open("comment.txt",ios::ate);
				if (!outcom) errorF("comment.txt");
		
		// читает символы до EOF
			while (inFile.get(simb)) {
				// длина очередной строки программы
				len++; 
				
				// начнется новая строка программы
				if (simb == '\n') len = 0; 
				
				// это не начало комментария
				if (simb != '/') 
					// вывод символа строки программы:
					outtext.put(simb);
				else {
					// когда simb == '/' - возможно начало комментария 
					// проверка на EOF:
					if (!inFile.get(next)) break;
					if (next == '/') {
						// теперь уже точно комментарии
						if (len != 1)
							// "закрываем" строку программы:
							outtext.put('\n');
						outcom.put(simb);
						outcom.put(next);
						// цикл до конца комментария, т.е. до конца строки:
						do {
							// чтение символа иэ файла:
							inFile.get(simb);
							// запись символа в поток:
							outcom.put(simb);
							} 
						while (simb != '\n');
					}
					else {
						// вывод символов, не входящих в комментарий:
						outtext.put(simb);
						outtext.put(next);
					}
				}
			}
	}
