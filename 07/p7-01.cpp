//p7-01.cpp - библиографическая картотека - двухсвязный список
#include <string.h>
#include <iostream>

using namespace std;

struct card { // определение структурного типа для книги
				char *author; // автор
				char *title; // название
				char *city; // место
				char *firm; // издательство
				int year; // год издания
				int pages; // количество страниц
            };

// функция печати сведений о книге
void printbook (card& car) {
	static int count = 0;
	cout << "\n" << ++count << ". " << car.author;
	cout << ' ' << car.title << ". - " << car.city;
	cout << ": " << car.firm << ", ";
	cout << " " << car.year << ". - " << car.pages << " c. ";
}

struct record { // структурный тип для элемента списка
				card book;
				record *prior;
				record *next;
};

// исходные данные о книгах
card books[] = { // инициализация массива структур
	{ "Wiener R.S.", "Язык Турбо С", "Mосква", "Mup", 1991, 384 },
	{ "Stroustrup B.", "Язык C++", "Kueв", "Диасофт", 1993, 560 },
	{ "Turbo C++", "Pyкoвogcтвo nporpaммucтa", "Mосква", "ИНКТВ", 1991, 394 },
	{ "Lippman S.B.", "C++ gля нaчuнaющuх", "Mосква", "Гэлuoн", 1993, 496 },
	{ "Bauman B. Z.", "C++ gля продолжающих", "Новосибирск", "Мдану", 1999, 1296 },
};

int main () {
	record 	*begin = NULL; 	// указатель начала списка
	record	*last = NULL;  	// указатель на очередную запись
	record	*list;			// указатель на элементы списка
			
	// n - количество записей в списке
	int n = sizeof(books) / sizeof(books[0]);
	
	cout << "Количество записей в списке n = " << n;
	
	// цикл обработки исходных записей о книге
	for (int i = 0; i < n; i++)
	{ // создать новую запись (элемент списка)
		last = new(record);
		// занести сведения о книге в новую запись
		last ->book.author = books[i].author;
		last ->book.title = books[i].title;
		last ->book.city = books[i].city;
		last ->book.firm = books[i].firm;
		last ->book.year = books[i].year;
		last ->book.pages = books[i].pages;
		
		// включить в список (установить связи):
		if (begin == NULL) // списка ещё нет
		{
			last ->prior = NULL;
			begin = last; last ->next = NULL;
		}
		else
		{  // список уже существует
			list = begin;
			// цикл просмотра списка - поиск места для новой записи
			while (list)
			{
				if (strcmp(last ->book.author,list ->book.author) < 0)
				{ // вставить новую запись перед list:
					if (begin == list)
              		{ // начало списка
						last ->prior = NULL;
						begin = last;
                    }
					else
              		{ // вставка между записями
						list ->prior ->next = last;
                 		last ->prior = list ->prior;
               		}
				list ->prior = last;
				last ->next = list;
				// выйти из цикла просмотра списка
				break;
				}
				if (list ->next==NULL)
				{ // включить запись в конец списка
					last ->next = NULL;
					last ->prior = list;
					list ->next = last;
					break;
				}
				// перейти к следующему элементу списка
				list = list ->next;
			}
		// конец цикла просмотра списка (поиск места для новой записи)
		}
	// включение записи выполнено
	// конец цикла обработки исходных данных
    }
    
    // печать в алфавитном порядке библиографического списка
    
    list = begin;
    cout << "\n";
    
    while (list)
    	{	printbook (list ->book);
    		list = list ->next;
    	}
    
    cout << endl;
    return 0;
}
