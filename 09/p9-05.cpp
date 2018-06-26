//p9-05.cpp - указатель "this"

#include <iostream>

using std::cout;

class cell {			// класс "числовой элемент"
	int static Amount;	// общее количество элементов
	int Number; 		// порядковый номер элемента
	double Meaning; 	// значение элемента
	
	public:
	// конструктор
	cell(double Meaning = 0.0) {
		// меняем значение статического компонента:
		Amount++;
		this -> Number = Amount;
	
		// компонент и одноимённый параметр:
		this -> Meaning = Meaning;
	}
	
	// вывод сведений об объекте и количестве элементовЖ
	void display(void) {
		cout << "\n Number = " << this->Number;
		// лишний "this"	
		cout << "  Amount = " << this->Amount;
		cout << "  Meaning = " << this->Meaning;
	}
};
	// инициализация статического компонентаЖ
	int cell::Amount = 0;
		
int main() {
	cell A; // объект с умалчиваемым значением 
	A.display();
	cell B(200.0);
	cell C(300.0);
	
	B.display();
	C.display();
	
	cout << '\n';
	return 0;
}

