//p6-19.cpp - массив указателей на функции
#include <stdlib.h>
#include <iostream>

using namespace std;

// определение функций для обработки меню
void act1(char * name)
{
	cout << "	Действия по созданию файла " << name; }

void act2(char * name)
{
	cout << "	Действия по уничтожению файла " << name; }

void act3(char * name)
{
	cout << "	Действия по чтению файла " << name; }

void act4(char * name)
{
	cout << "	Действия по модификации файла " << name; }

void act5(char * name)
{
	cout << "	Действия по закрытию файла " << name << endl;
	exit(0); }  // завершение программы

// тип MENU указателей на функции типа void (char *):
typedef void (*MENU) (char *);

// инициализация таблицы адресов функций меню: 
MENU MenuAct[5] = { act1, act2, act3, act4, act5 };

int main ( )
{
	int number;  // номер выбранного пунтка меню
	char FileName[30]; // строка для имени файла
  
	cout << "\n 1 - Создание файла";
	cout << "\n 2 - Уничтожение файла";
	cout << "\n 3 - Чтение файла";
	cout << "\n 4 - Модификация файла";
	cout << "\n 5 - Закрытие файла. Выход из программы";
  
	while (1)
    { 
		while (1)
		{
			// цикл продолжается до ввода правильного номера
			cout << "\n\n Введите номер пункта меню: ";
			cin >> number;
			
			if (number >= 1 && number <= 5) break;
			cout << "\nОшибка в выборе номера пункта меню!";
		}
		if (number != 5)
		{
			cout << "\n Введите имя файла: ";
			cin >> FileName; // читать имя файла
		}
		// вызов функции по указателю на неё:
		
		(*MenuAct[number - 1]) (FileName);
	} // конец бесконечного цикла
	cout << endl;
	return 0;
}
