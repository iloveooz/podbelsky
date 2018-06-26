// p9-03.cpp - статические компоненты класса
#include <iostream>

using std::cout;
using std::endl;

class point3 { // точка в трёхмерном пространстве
	double x, y, z; // координаты точек
	static int N; // количество точек (счётчик)
public:
	// конструктор инициализирует значения координат
	point3(double xn = 0.0, double yn = 0.0, double zn = 0.0)
		{ 
			N++; 
			x = xn;
			y = yn;
			z = zn;
		}
	// обращение к счётчику
	static int& count() { return N; }
};
// внешнее описание и инициализация статического элемента:
	int point3::N = 0;
	
	int main() {
		cout << "\nsizeof(point3) = " << sizeof(point3);
		
		point3 A(0.0, 1.0, 2.0);
		cout << "\nsizeof(A) = " << sizeof(A);

		point3 B(3.0, 4.0, 5.0);
		cout << "\nsizeof(B) = " << sizeof(B);
	cout << "\n Определены " << point3::count() << " точки.";

		point3 C(6.0, 7.0, 8.0);
		cout << "\nsizeof(C) = " << sizeof(C);

	cout << "\n Определены " << B.count() << " точки." << endl;
	// cout << "Счётчик равен = " << point3::N << endl;
	return 0;
}
