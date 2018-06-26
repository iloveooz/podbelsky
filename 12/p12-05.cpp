//Р12-05.СРР - исключения без передачи информации
	#include <iostream>
	
	using std::cout;
	using std::cerr;
	
	class ZeroDivide {}; // Класс без компонентов
	class Overflow {}; // Класс без компонентов
	
	// Определение фyнкции с генерацией исключений:
	float div(float n, float d)
	{
		if (d == 0.0)
			throw ZeroDivide(); // Вызов констрyктора
	
		double b = n / d;
	
		if (b > 1e+30) throw Overflow(); // Вызов констрyктора
		return b;
	}
		
	float x = 1e-20, y = 5.5, z = 1e+20, w = 0.0;
	
		// Вызывающая фyнкция с выявлением и обработкой исключений:

	void RR(void)
	{ 
		// Контролирyемый блок;

		try {
			y = div(4.4, w);
			z = div(z, x);
		}
		// Последовательность обработчиков исключений:

		catch (Overflow)
		{ 
			cerr << "\n Overflow"; z = 1e30; }

		catch (ZeroDivide)
		{ 
			cerr << "\n ZeroDivide"; w = 1.0; }
	}


	int main () { 
		// Вызов фyнкции div() с нyлевым делителем w:
		RR();
	
		// Вызов фyнкции div() с арифметическим переполнением
		RR();
	
		cout << "\n Result: y = " << y;
		cout << "\n Result: z = " << z;
		cout << '\n';
		return 0;
	}
