//p12-03.cpp - исключения глобального пользовательского типа
	#include <iostream>
	
	using std::cout;
	using std::cerr;
	
	struct DATA // Глобальный класс объектов-исключений
	{ 
		int n, m;
		char *s;
	
	DATA (int x, int y, char *c) // Констрyктор класса DATA
		{ 
			n = x; 
			m = y; 
			s = c;
		}
	};
	
	// Определение фyнкции
	int GCM_ONE(int x, int y) {
		if (x == 0 || y == 0) throw DATA(x, y, "\n ZERO!");
		if (x < 0) throw DATA(x, y, "\n Negative parameter 1.");
		if (y < 0) throw DATA(x, y, "\n Negative parameter 2.");
	
		while (x != y)
		{ 
			if (x > y) 
				x = x - y;
			else 
				y = y - x;
		}
			return x;
	}
	
	int main() {
		try {
				cout << "\n GCM_ONE(66, 44) = " << GCM_ONE(66, 44);
				cout << "\n GCM_ONE(60, 7) = " << GCM_ONE(60, 7);
				cout << "\n GCM_ONE(-12, 8) = " << GCM_ONE(-12, 8);
			}
		catch (DATA d) { 
			cerr << d.s << " x = " << d.n << ", y = " << d.m; }
		cout << '\n';
		return 0;
	}
