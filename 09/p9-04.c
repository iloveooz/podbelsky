// p9-04.cpp - работа с классом "точка на экране"

#include <graphics.h>

	// класс - точка на экране дисплея
	class point {
		// защищенные данные класса
		protected:
		
		// координаты точки
		int x, y;
		
		// прототипы общедоступных компонентных функций:
		public:
		
		// конструктор
		point (int xi = 0, int yi = 0) {
			x = xi;
			y = xi;
		}	
		
		// доступ к x
		int& givex(void) { return x; }
		
		// доступ к y 
		int& givey(void) { return y; }
		
		// изобразить точку на экране
		void show(void) {
			putpixel (x, y, getcolor());
		}
		
		// переместить точку в новое место на экране
		// (xn == 0, yn == 0 - умалчиваемые значения параметров)
		void move(int xn = 0, int yn = 0) {
			hide();
			x = xn;
			y = yn;
			show();
		}
		// собственная функция класса:
		private:
		
		// убрать с экрана изображение точки
		void hide() {
			putpixel (x, y, getbkcolor()); 
		}
	};

int main() {
	point A(200, 50); 	// создаётся невидимая точка А
	
	point B; 			// создаётся невидимая точка В с нулевыми координатами по умолчанию
	
	point D(500, 200); 	// создаётся невидимая точка D
	
	// переменные для инициализации графики
	int dr = DETECT, mod;
	initgraph( &dr, &mod, NULL);
	
	A.show();		// показать на экране точку А
	getch();
	
	B.show();		// показать на экране точку В
	getch();
	
	D.show();		// показать на экране точку D
	getch();
	
	A.move();		// переместить точку А
	getch();
	
	B.move(50, 50); // переместить точку В
	getch();
	
	closegraph(); 	// закрыть графический режим
	
	return 0;
}

	
