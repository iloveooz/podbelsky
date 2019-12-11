// p10-01.cpp - наследование классов и их деструкторы
// графическая библиотека -lSDL_bgi -lSDL -lm
#include </opt/libgraph/include/graphics.h>

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
	

	class spot:
		// public позволит сохранить статусы доступа для наследуемых компонент класса POINT
		public point {
			// статус доступности данных в производных классах:
			// радиус пятна (изображения):
			int rad;
			// видимость пятна на экране:
			int vis;
			// признак сохранения образа в памяти:
			int tag;
			// указатель на область память для изображения (для битового образа):
			void *pspot;
		
		public:
			// конструктор класса SPOT:
			spot (int xi, int yi, int ri):
			// вызов конструктора базового класса:
				point(xi, yi) { 
					int size;
					vis = 0; 
					tag = 0;
					rad = ri;
					// определить размеры битового образа:
					size = imagesize(xi - ri, yi - ri, xi + ri, yi + ri);					
					// Выделить память для битового образа: 
					pspot = new char [size];
				}
			// деструктор класса SPOT
			~spot() {
				// убрать с экрана изображение пятна
				hide();
				// сбросить признак сохранения в памяти
				tag = 0;
				// освободить память, где находился битовый образ
				delete pspot;
			}
			
			// изобразить пятно на экране дисплея
			void show () {
				// Если битового образа нет в памяти:
				if (tag == 0) {
					// нарисовать окружность на экране:
					circle(x, y, rad);
					// закрасить пятно:
					floodfill(x, y, getcolor());
					// запомнить битовый образ в памяти:
					getimage(x - rad, y - rad, x + rad, y + rad, pspot);
					tag = 1; 
				}
				else 
					// перенести изображение из памяти на экран:
					putimage(x - rad, y - rad, pspot, XOR_PUT);
				vis = 1;
			}
			
			// убрать с экрана изображение пятна:
			void hide() {
				// нечего убирать
				if (vis == 0) return;
				// стереть изображение с экрана:
				putimage(x - rad, y - rad, pspot, XOR_PUT);	
			}
			
			// переместить изображение:
			void move(int xn, int yn) {
				// убрать старое изображение с экрана:
				hide();
				// изменить координаты центра пятна:
				x = xn;
				y = yn;
				// вывести изображение в новом месте:
				show();
			}
			
			// изменить размер изображения пятна:
			void vary(float dr) {
				float a;
				int size;
				// убрать старое изображение с экрана: 
				hide();
				tag = 0;
				// освободить память битового образа:
				delete pspot;
				// вычислить новый радиус: 
				a = dr * rad;
				if (a <= 0) rad = 0;
				else
				rad = int(a);
				
				// определить размеры битового образа:
				size = imagesize(x - rad, y - rad, x + rad, y + rad);
				
				// выделить память для нового образа:
				new char[size];
				// изобразить пятно на экране:
				show();
			}
			
			// доступ к радиусу пятна:
			int& diver(void) {
				return rad; 
			}
			
		};	

	
	int main() {
		// переменные для инициализации графики:
		int dr = DETECT, mod;
		
		// инициализация графической системы:
		initgraph(&dr, &mod, NULL);
		
		{
			// в этом блоке создаются и используются объекты класса spot
			// создаётся невидимое пятно A:
			spot A(200, 50, 20);
			
			// создаётся невидимое пятно D:
			spot D(500, 200, 30);
			
			// изобразить пятно А на экране
			A.show();
			getch();
			
			// изобразить пятно D на экране
			D.show();
			getch();
			
			// переместить пятно A 
			A.move(50, 60);
			getch();
			
			// изменить размеры пятна D
			D.vary(3);
			getch();
		}
		
		// при выходе из блока для каждого объекта автоматически
		// вызывается деструктор, освобождающий выделенную память
		closegraph();
		
		return 0;
	}
