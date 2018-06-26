// p9-04.cpp - работа с классом "точка на экране"

#include "/opt/libgraph/include/graphics.h"
#include <iostream>

	// класс - точка на экране дисплея
	class point {
		// защищенные данные класса
		protected:
		
			// координаты точки
			int x, y, radius;
		
		// прототипы общедоступных компонентных функций:
		public:
		
			// конструктор
			point (int xi = 5, int yi = 5, int radiusi = 3)
			{
				x = xi;
				y = xi;
				radius = radiusi;
			}
			// доступ к x
			int& givex(void);
		
			// доступ к y 
			int& givey(void);
		
			// изобразить точку на экране
			void show(void) {
				putpixel (x, y, getcolor());
				circle(x, y, radius);
			}
		
			// переместить точку в новое место на экране
			// (xn == 0, yn == 0 - умалчиваемые значения параметров)
			void move(int xn = 20, int yn = 50, int radiusn = 5) {
				hide ();
				x = xn;
				y = yn;
				radius = radiusn;
				show();
			} 
			
		// собственная функция класса:
		private:
		
		// убрать с экрана изображение точки
		void hide() {
			putpixel (x, y, getbkcolor()); 
		}

	};

// внешнее определение функций (методов) класса

	int& point::givex(void) { return x; }
	int& point::givey(void) { return y; }
	
//#include "/home/fahr/project/pod4belsky/exe/point.cpp"	

int main() {
	point A(200, 50); 	// создаётся невидимая точка А
	
	point B; 			// создаётся невидимая точка В с нулевыми координатами по умолчанию
	
	point D(400, 100); 	// создаётся невидимая точка D
	
	std:: cout << " Программа выполнена\n";
	
	// переменные для инициализации графики
	int dr = DETECT, mod;
	initgraph( &dr, &mod, NULL);
	//initwindow(1000, 500);
	
	A.show();		// показать на экране точку А(200, 50);
	getch();
	
	B.show();		// показать на экране точку В(5, 5);
	getch();
	
	D.show();		// показать на экране точку D(400, 200);
	getch();
	
	A.move();		// переместить точку А(200, 50) hide, A(20, 50) show 
	getch();
	
	B.move(50, 5); // переместить точку В(5, 5) hide, B(50, 5) show
	getch();
	
	B.move(150, 50); // переместить точку В(5, 5) hide, B(50, 5) show
	getch();
	
	for (int i = 1; i < 6; i++) {
		D.move(10, (i * 30));		// показать на экране точку D(400, 200);
		//getch();
	}
	delay(1000);
	closegraph(); 	// закрыть графический режим
	
	return 0;
}

	
