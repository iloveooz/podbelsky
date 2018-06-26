// p10-07.cpp - некоторые особенности виртуальных функций
	#include <iostream>

	using std::cout;

	struct base {
		virtual void f1 () {
			cout << "\n base::f1";
		}
		
		virtual void f2 () {
			cout << "\n base::f2";
		}
		
		virtual void f3 () {
			cout << "\n base::f3";
		}
	};

	struct dir : public base {
		
		// виртуальная функция
		void f1 () {
			cout << "\n dir::f1"; 
		}
		
		// ошибка в типе функции
		//int f2 () {
		//	cout << "\n dir::f2"; 
		//}
		
		// невиртуальная функция
		void f3 (int i) {
			cout << "\n dir::f3::i" << i; 
		}		
	};

	int main() {
		base B, *pb = &B;
		dir D, *pd = &D;
				
		pb->f1();
		pb->f2();
		pb->f3();
		pd->f1();
		pd->f2();
		
		// ошибка при попытке без параметра вызвать dir::f3::i
		// pd->f3();
		
		pd->f3(0);
		pb = &D;
		
		pb->f1();
		pb->f2();
		pb->f3();
		
		// ошибочное употребление или параметра, или указателя:
		// pb->f3(3);	
		
		cout << '\n';
		return 0;
		
	}
