// p9-13.cpp - перегрузка унарных операций ++ и -- 
#include <iostream>
using std::cout;

	// класс "пара чисел"
	class pair {
		// целое число
		int n;
		
		// вещественное число
		double x;
		
		// дружественная функция
		friend pair & operator ++(pair &);
		
		public:
			// конструктор
			pair(int n, double x) {
				this->n = n;
				this->x = x;
			}
			
			void display() {
				cout << "\n Координаты: N = " << this->n << "\tx = " << x;
			}
			
			// компонентная функция
			pair& operator --() {
				this->n -= 1;
				x -= 1.0;
				return *this;
			}
	};
		
	// дружественная функция	
	pair& operator ++(pair &P) {
		P.n += 1;
		P.x += 1;
		return P;
	}
	
	int main() {
		pair Z(10, 20.0);
		Z.display();
		++Z; Z.display();
		--Z; Z.display();
		//Z++; Z.display();
		//Z--; Z.display();
		cout << '\n';
		return 0;
	}
	
	
