//p12-04.cpp - локализация определений типов (классов) исключений
#include <iostream>

using std::cout;
using std::cerr;

int GCM_ONE(int x, int y) {
	struct DATA // Определение типа локализовано в фyнкции
	{ 
		int n, m;
		char *s;
	
		DATA(int x, int y, char *c) // Констрyктор класса DATA
		{ 
			n = x; 
			m = y;
			s = c;
		}
	};
	
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

int main () {
	struct DATA // Определение типа локализовано в main()
	{ 
		int n, m;
		char *s;
	
		DATA(int x, int y, char *c) // Констрyктор класса DATA
		{
			n = x;
			m = y;
			s = c;
		}
	};

	try
	{
		cout << "\n GCM_ONE(66, 44) = " << GCM_ONE(66, 44);
		cout << "\n GCM_ONE(-12, 8) = " << GCM_ONE(-12, 8);
		cout << "\n GGM_ONE(0, 7) = " << GCM_ONE(0, 7);
	}

	catch (DATA d)
	{ 
		cerr << d.s << " x = " << d.n << ", y = " << d.m;
	}
	cout << '\n';
	return 0;
}

