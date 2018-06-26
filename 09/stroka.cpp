//stroka.cpp - файл с определением класса "символьная строка"
#include <iostream>
#include <string.h>

using std::cout;

class stroka
{
	// скрытые от внешнего доступа данные:
	char *ch;	// указатель на текстовую строку
	int len;	// длина текстовой строки

	public:

	// конструкторы объектов класса:
	// создаёт объект, как новую пустую строку
	stroka (int N = 80) : 
	// строка не содержит информации
				len(0)
	{ ch = new char[N + 1]; // для массива выделена память
	  ch[0] = '\0';
	}

	// создаёт объект по заданной строке
	stroka (const char *arch) {
		len = strlen(arch);
		ch = new char[len + 1];
		strcpy(ch, arch);
	}

	int& len_str(void) 	// возвращает ссылку на длину строки
	{ return len; }

	char *string(void)	// возвращает указатель на строку
	{ return ch; }

	void display (void) {
		cout << "\n Длина строки: " << len;
		cout << "\n Содержимое строки: " << ch;
	}

	// деструктор - освобождает память объекта
	~stroka() { delete [] ch; }
};


