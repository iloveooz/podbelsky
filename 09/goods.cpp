//goods.cpp - класс "Товары на складе магазина"
#include <iostream>

using namespace std;

struct goods 				// определение класса "товары"
{
	char name[40]; 			// наименование товара
	float price;			// оптовая (закупочная) цена товара
	static int percent;		// торговая наценка, в %

	void Input() 			// ввод сведений о товаре
	{
		cout << "Наименование товара: "; cin >> name;
		cout << "Закупочная цена: "; cin >> price; 
	}

	void Display() 			// вывод данных о товаре
	{
		cout << "\n" << name;
		cout << ", розничная цена: ";
		cout << long(price * (1.0 + goods::percent * 0.01)); 
	} 
};




