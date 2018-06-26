//p12-01.cpp - GCM - Greatest Common Measure
#include <iostream>

using std::cout;
using std::cerr;

	int i = 0;

	// Определение фyнкции с генерацией, контролем и обработкой исключений:
	int GCM(int x, int y) {
		// Контролирyемый блок:
		try {
			if (x == 0 || y == 0) throw "\n ZERO!";
			if (x < 0) throw "\n Negative parameter 1.";
			if (y < 0) throw "\n Negative parameter 2.";
	
			while (x != y) {
				i++;
				if (x > y) {
					cout << ' ' << "i = " << i << ": " << '(' << x << " > " << y << ')';
					cout << " x = " << x << " - " << y;
					x = x - y;
					cout << ", x = " << x << '\n';  
				}
				else {
					cout << ' ' << "i = " << i << ": " << '(' << x << " < " << y << ')';
					cout << " y = " << y << " - " << x;
					y = y - x;
					cout << ", y = " << y << '\n';
				}
			}
			return x;
		} // Конец контролирyемого блока
	
		// Обработчик исключений стандартного типа "строка":
		catch (const char *report1) {
			cerr << report1 << " x = " << x << ", y = " << y << "; return = ";
			return 0;
		}
	} // Конец определения фyнкции

int main() {
	// Безошибочный вызов:
	cout << "\n GCM(129, 72) = \n" << GCM(129, 72);

	// Нyлевой параметр:
	cout << "\n GCM(0, 7) = " << GCM(0, 7);

	// Отрицательный параметр:
	cout << "\n GCM(-12, 8) = " << GCM(-12, 8);
	
	// Отрицательный параметр:
	cout << "\n GCM(120, -8) = " << GCM(120, -8);
	
	cout << '\n';
	return 0;
}

