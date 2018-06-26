//p10-10.cpp - внешние, локальные и глобальные классы

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
	
	// глобальный класс "квадрат"
	class square {
		// локальный класс "отрезок"
		class segment { 
			// точки начала и конца отрезка
			point pn, pk;
			
			public: 
				// конструктор отрезка
				segment(point pin = point(0, 0), point pik = point(0, 0)) { 
					pn.givex() = pin.givex();
					pn.givey() = pin.givey();
					pk.givex() = pik.givex();
					pk.givey() = pik.givey();
				}
				
				// доступ к граничным точкам отрезка:
				point& beg(void) { return pn; }
				point& end(void) { return pk; }
				
				// изобразить отрезок на экране
				void showSeg() {
					line (pn.givex(), pn.givey(), pk.givex(), pk.givey());
				}
		}; // конец определения класса segment


		segment ab, bc, cd, da; // отрезки - стороны квадрата


	public:
		// конструктор квадрата:
		square (point ci = point(0, 0), int di = 0) {
			// вершины квадрата - локальные объекты конструктора:
			
			point a, b, c, d;
	
			a.givex() = ci.givex() + di/2;
			a.givey() = ci.givey() - di/2;
			
			b.givex() = ci.givex() - di/2;
			b.givey() = ci.givey() - di/2;
			
			c.givex() = ci.givex() - di/2;
			c.givey() = ci.givey() + di/2;
			
			d.givex() = ci.givex() + di/2;
			d.givey() = ci.givey() + di/2;
	
			// граничные точки отрезков:
			ab.beg() = a; 
			ab.end() = b;
			
			bc.beg() = b;
			bc.end() = c;
			
			cd.beg() = c; 
			cd.end() = d;
			
			da.beg() = d; 
			da.end() = a;
		}
	
		// изобразить квадрат	
		void showSquare(void) { 
			ab.showSeg();
			bc.showSeg();
			cd.showSeg();
			da.showSeg();
		}
	};

	int main() {
		// переменные для инициализации графики:
	
		int dr = DETECT, mod;
	
		// инициализация графической системы:
		initgraph(&dr, &mod, NULL);
	
		point p1(80, 120);
		point p2(250, 240);
		
		square A(p1, 50);
		square B(p2, 100);
	
		A.showSquare(); getch();
		B.showSquare(); getch();
		closegraph();

		return 0;
	}
