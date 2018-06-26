// p9-07.cpp - класс с дружественной функцией
#include <iostream> 	// cout, cin, 
#include <iomanip> 		// setw
#include <stdlib.h>		// pause

	// класс - "символ в заданной позиции экрана"
	class charlocus {
		// координата знакоместа на экране дисплея
		int x; 
		
		// значение символаб связанного со знакоместом:
		char cc;
		
		// прототип дружественной функции для замены символа:
		friend void friend_put(charlocus *, char);
		
		public:
		
		// конструктор
		charlocus(int xi, int yi, char ci) {
			x = xi;
			y = xi;
			cc = ci;
		}
		
		// вывод символа на экран
		void display (void) {
			std::cout << std::setw(x) << cc << '\n';
		}
	};
	
	// дружественная функция для замены символа в конкретном объекте
	void friend_put(charlocus *p, char c) {
		p->cc = c;
	}
	
	int main() {
		// создание объекта D
		charlocus D(20, 4, 'd'); 
		
		// создание объекта S
		charlocus S(10, 10, 's');
		
		system("clear");
		
		D.display();
				
		S.display();
				
		friend_put(&D, '*');
		D.display(); 
				
		friend_put(&S, '#');
		S.display();
		
		std::cout << '\n';
		return 0;
	}
