//p9-12.cpp - операция-функция как дружественная функция
#include <iostream>

using std::cout;

	// класс "радиус-вектор"
	class vector {
		// размерность пространства:
		int N;
		
		// указатель на массив координат:
		double *x;
		
		// прототип операции-функции:
		friend vector& operator - (vector &);
		
		public:
			// конструктор
			vector (int n, double *xn) {
				N = n;
				x = xn;
			}
			
			// компонентная функция печати вектора
			void display();
		};
		
		// определение компонентной функции:
		void vector::display() {
			cout << "\nКоординаты вектора: ";
			for (int i = 0; i < N; i++) cout << '\t' << x[i];
		}
		
		// определение операции-функции:
		vector& operator - (vector& v) {
			for (int i = 0; i < v.N; i++) v.x[i] = -v.x[i];
			return v;
		}
		
		int main() {
			// определяем массив
			double A[] = {1.0, 2.0, 3.0, 4.0};
			
			// создан объект класса vector
			vector V(4, A);
			
			// вывод на экран
			V.display();
			
			// перегруженная операция
			V = -V;
			
			V.display();
			
			cout << '\n';
			return 0;
		}
		
		
