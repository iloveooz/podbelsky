//09-01.cpp - массив объектов класса goods
#include <iostream>

using namespace std;

struct goods 				// определение класса "товары"
{
	private:
	public:
	char name[40]; 			// наименование товара
	char label[40];			// марка товара
	float price;			// оптовая (закупочная) цена товара
	static int percent;		// торговая наценка, в %

	void Input() 			// ввод сведений о товаре
	{
		cout << "Наименование товара: "; cin >> name;
		cout << "Марка товара: "; cin >> label;
		cout << "Закупочная цена: "; cin >> price; 
	}

	void Display() 			// вывод данных о товаре
	{
		cout << "\n" << name << " марки " << label;
		cout << ", розничная цена: ";
		cout << long(price * (1.0 + goods::percent * 0.01)); 
	} 
};

int goods::percent = 12;

int main (void) 
{
	goods wares[5] = 
	{
		{ "Мужской костюм", "Brezzoni", 19000 },
		{ "Косметический набор", "Moolin Rush", 2760 },
		{ "Калькулятор", "Sanyo", 1100 }
	};

	goods foods[5] =
	{
		{ "Макароны", "Макфа", 120 }, 
		{ "Шоколадные конфеты", "Птичье молоко", 300 },
		{ "Пряники", "Тульские", 150 }
	};
	
	
	int kf = sizeof(foods) / sizeof(foods[0]);
	int kw = sizeof(wares) / sizeof(wares[0]);

	cout << "kw = " << kw << endl;

	cout << "\nВведите сведения о товарах:\n";
	for (int i = 3; i < kf; i++) foods[i].Input();

	cout << "\n\nСписок товаров при наценке " << foods[0].percent << '%';
	for (int i = 0; i < kf; i++) foods[i].Display();

	goods::percent = 10;

	cout << "\n\nСписок товаров при наценке " << foods[0].percent << '%';
	goods *pGoods = foods;
	for (int i = 0; i < kf; i++) pGoods++ -> Display();

	goods::percent = 57;

	cout << "\n\nСписок товаров при наценке " << foods[0].percent << '%';
	goods *ptrGoods = foods;
	for (int i = 0; i < kf; i++) ptrGoods++ -> Display();

	cout << endl;
	return 0;
}






