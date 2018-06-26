// p9-09.cpp - дружественные классы
	#include <iostream>
	#include <stdlib.h> // exit()
	
	using namespace std;

	// класс "точка в N-мерном пространстве":

	class pointN {
		// размерность пространства
		int SizeSpaceN;
		
		// указатель на массив координат точки:
		double *x;
		
		// описание дружественного класса:
		friend class vectorN;
		
		public:
		// конструктор "точек"
		pointN(int n, double d = 0.0);
	};
	
	// внешнее определение конструктора
	pointN::pointN(int n, double d) {
		// определение размерности
		x = new double [SizeSpaceN];
		
		// инициализация массива координат
		for (int i = 0; i < SizeSpaceN; i++) x[i] = d;
	}
	
	// класс "радиус-вектор":
	class vectorN {
		// указатель на массив координат конца вектора
		double *xv;
		
		// размерность пространства
		int SizeVectorN;
		
		public:
		// конструктор "векторов"
		vectorN(pointN, pointN);
		
		// норма вектора
		double norm();
	};
	
	// внешнее определение конструктора
	vectorN::vectorN(pointN beg, pointN end) {
		// проверка точек
		if (beg.SizeSpaceN != end.SizeSpaceN) {
			cerr << "\n Ошибка в размерностях точек!" << '\n';
			
			// завершение программы
			exit(1);
		}
	
		// размерность вектора	
		SizeVectorN = beg.SizeSpaceN;
		xv = new double [SizeVectorN];
		
		// определение координат
		for (int i = 0; i < SizeVectorN; i++) xv[i] = end.x[i] - beg.x[i];	
	}
	
	// вычисление нормы вектора
	double vectorN::norm () {
		double dd = 0.0;
		for (int i = 0; i < SizeVectorN; i++) dd += xv[i] * xv[i];
		return dd;
	}
	
	int main() {
		pointN A(2, 4.0);
		pointN B(2, 2.0);
		
		vectorN V(A, B);
		
		cout << "\n Норма вектора: " << V.norm();
		
		pointN X(3, 2.0);
		vectorN Z(A, X);
		
		cout << '\n';
		return 0;
	}
	
