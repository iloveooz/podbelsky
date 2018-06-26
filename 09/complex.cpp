// complex.cpp - определение класса "комплексное число"

#include <iostream>

using namespace std;

// класс с конструктором и инкапсуляцией данных 
struct complex
{
	public:
	int id;
	// методы класса (все общедоступные - public)
	// конструктор объектов класса:
	complex(double re = 1.0, double im = 0.0)
	{ 
		real = re; 
		imag = im;
	}
	
	// вывод на дисплей значения комплексного числа
	void display(void)
	{
		cout << "real = " << real;
		cout << ", imag = " << imag;
	}
	
	// получение доступа к вещественной части числа:
	double &re(void) { return real; }
	
	// получение доступа к мнимой части числа:
	double &im(void) { return imag; }
	
	// данные класса (скрыты от прямых внешних обращений):
	private: // статус доступа - скрытый
	
	double real;
	double imag;
};

