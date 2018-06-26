// p9-08.cpp - классы с общей дружественной функцией
#include <iostream>

using std::cout;

// предварительное описание
class line2; 

// класс "точка на плоскости"
class point2 {
	// координаты точки на плоскости
	float x, y;
	
	public:
	// конструктор
	point2(float xn = 0, float yn = 0) {
		x = xn;
		y = yn;
	}
	
	friend float uclon(point2, line2);
};

// класс "прямая на плоскости"
class line2 {
	// параметры прямой
	float A, B, C;
	
	public:
	// конструктор
	line2(float a, float b, float c) {
		A = a;
		B = b; 
		C = c;
	}
	
	friend float uclon(point2, line2);
};

// внешнее определение дружественной функции
float uclon (point2 p, line2 l) {
	return l.A * p.x + l.B * p.y + l.C; 
}

int main () {
	// определение точки Р
	point2 P(16.0, 12.3);
	
	// определение прямой L
	line2 L(10.0, -42.3, 24.0);
	
	cout << "\n Уклонение точки P от прямой L: ";
	cout << uclon (P, L) << '\n';
	return 0;
}
