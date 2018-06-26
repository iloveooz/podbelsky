// p9-14.cpp - необычная перегрузка унарных операций ++ и -- 
#include <iostream>
using std::cout;

	// класс "пара чисел"
	class pair {
		// целое число
		int N;
		
		// вещественное число
		double x;
		
		// дружественная функция для префиксной операции
		friend pair & operator ++(pair &);
		
		// дружественная функция для постфиксной операции
		friend pair & operator ++(pair &, int);
		
		public:
			// конструктор
			pair(int n, double x) {
				N = n;
				this->x = x;
			}
			
			void display() {
				cout << "\n Координаты: N = " << N << "\tx = " << x;
			}
			
			// компонентная функция (префиксная --)
			pair& operator --() {
				N /= 10;
				x /= 10.0;
				return *this;
			}
			
			// компонентная функция (постфиксная --)
			pair& operator --(int k) {
				N /= 2;
				x /= 2.0;
				return *this;
			}
	};
		
	// дружественная функция (префиксная операция ++)	
	pair& operator ++(pair &P) {
		P.N *= 10;
		P.x *= 10;
		return P;
	}
	
	// дружественная функция (постфиксная операция ++)	
	pair& operator ++(pair &P, int k) {
		P.N = P.N * 2;
		P.x = P.x * 2;
		return P;
	}	
	
	int main() {
		pair Z(10, 20.0);
		cout << "Изначально. "; Z.display();
		cout << '\n';
		++Z; Z.display();
		--Z; Z.display();
		Z++; Z.display();
		Z--; Z.display();
		cout << '\n';
		return 0;
	}
	
	
