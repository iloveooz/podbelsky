// p10-02.cpp - окружность в квадрате множественное наследование
#include </opt/libgraph/include/graphics.h>


	// класс - точка на экране дисплея
	class point {
		// защищенные данные класса
		protected:
		
			// координаты точки
			int x, y;
		
		// прототипы общедоступных компонентных функций:
		public:
		
			// конструктор
			point (int xi = 100, int yi = 100)
			{
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
			void move(int xn = 20, int yn = 50) {
				// hide ();
				x = xn;
				y = yn;
				// show();
			} 
			
		// собственная функция класса:
		private:
		
		// убрать с экрана изображение точки
		void hide() {
			putpixel (x, y, getbkcolor()); 
		}

	};

	// circ.cpp - определение класса окружность 
	class circ : virtual public point { 
		// координаты центра и радиус окружности
		int rc;
		
		public:
			// конструктор
			circ(int xi, int yi, int ri) : point (xi, yi) {
				x = xi;
				y = yi;
				rc = ri;
			}
			
			// изобразить окружность на экране:
			void show () {
				circle(x, y, rc);
				floodfill(x, y, getcolor());
			}
			
			// убрать с экрана изображение окружности:
			void hide () {
				int bk, cc;
				
				// цвет фона
				bk = getbkcolor();
				// цвет изображения
				cc = getcolor();
				// сменить цвет рисования
				setcolor(bk);
				
				// рисуем окружность цветом фона:
				circle (x, y, rc);
				floodfill(x, y, getcolor());
				
				// восстановить цвет изображения:
				setcolor(cc);
		}
	};
	
	// ellipse.cpp - определение класса эллипс
	class ellips : virtual public point {
		// координаты центра квадрата и длина стороны квадрата
		protected:
		int rex, rey;
		
		public:
			// конструктор
			ellips(int xc, int yc, int rx, int ry) : point(xc, yc) {
				x = xc;
				y = yc;
				rex = rx;
				rey = ry;
			}
			
			// изобразить эллипс на экране:
			void show () {
				ellipse(x, y, 0, 360, rex, rey);
				ellipse(x, y, 0, 360, ++rex, ++rey);
				return;
			}
			
			// убрать с экрана изображение эллипса:
			void hide () {
				int bk, cc;
				
				// цвет фона
				bk = getbkcolor();
				// цвет изображения
				cc = getcolor();
				// сменить цвет рисования
				setcolor(bk);
				
				// рисуем квадрат цветом фона:
				ellipse(x, y, 0, 360, rex, rey);
				ellipse(x, y, 0, 360, --rex, --rey);
				
				// восстановить цвет изображения:
				setcolor(cc);
		}
	};

// производный класс - "окружность, вписанная в квадрат";
// класс circsqrt наследует только методы обоих базовых классов
// в нём нет наследуемых данных

	class spotelli : public circ, public ellips {
		
		// вспомогательная inline-функция
		int min(int value1, int value2) {
			return ((value1 < value2) ? value1 : value2); 
		}
				
		public:
			// конструктор
			spotelli(int xis, int yis, int rx, int ry) :
				// явно вызываются конструкторы базовых классов
				circ(xis, yis, min(rx, ry)),
				ellips(xis, yis, rx, ry)
			{ }
			
			void show () {
				circ::show();
				ellips::show();
			}
			
			// убрать изображение с экрана
			void hide() {
				circ::hide();
				ellips::hide();
			}
	};			
			
	int main() {
		int dr = DETECT, mod;
		initgraph(&dr, &mod, NULL);
		{
			spotelli A1(100, 100, 20, 80);
			spotelli F4(400, 300, 230, 100);
			
			// A1.move(100, 100);
			// F4.move(100, 100);
			
			A1.show(); getch();
			F4.show(); getch();
		
			// A1.move(400, 300);
			// F4.move(400, 300);
		
			F4.hide(); getch();
			A1.hide(); getch();
		}
		
		closegraph();
		
		return 0;
	}
	
