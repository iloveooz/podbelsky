//p12-02.cpp - фyнкция с генерацией, но без контроля исключений
#include <iostream>

using std::cout;
using std::cerr;

	// Определение фyнкции
	int GCM_NEW(int x, int y) {
		if (x == 0 || y == 0) throw "\n ZERO!";
		if (x < 0) throw "\n Negative parameter 1.";
		if (y < 0) throw "\n Negative parameter 2.";
	
		while (x != y) {
			if (x > y) x = x - y;
				else y = y - x;
		}
		return x;
	}
	
	// Контроль и обработка исключений в вызывающей программе
	int main () { 
		try // Контролирyемый блок
		{
			cout << "\n GCM_NEW(66, 44) = " << GCM_NEW(66, 44);
			cout << "\n GCM_NEW(0, 7) = " << GCM_NEW(0, 7);
			cout << "\n GCM_NEW(-12, 8) = " << GCM_NEW(-12, 8);
		}
		catch (const char *report) // Обработчик исключений
		{
			cerr << report; }
		cout << '\n';
		return 0;
	}
