// p10-09.cpp - односвязный список объектов разных классов
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

// figure.cpp - абстрактный класс на базе класса

	class figure: public point {
		public:
			// Конструктор абстрактного класса figure:
			figure(point p): point(p.givex(), p.givey()) {  }
	
			// Чистая виртуальная функция для будущего изображения фигур:
			virtual void show() = 0;
			
			// Функция для удаления изображения фигуры:
			void hide () {
				int bk, cc;
				bk = getbkcolor();
				cc = getcolor();
				
				setcolor(bk);
				
				// Обращение к чистой виртуальной функции
				show(); 
				setcolor(cc);
			}
			
			// Перемещение фигуры в точку "р"
			void move(point p) { 
				hide(); 
				x = p.givex(); 
				y = p.givey(); 
				show(); 
			}
	};
	
// ellips.fig - конкретный класс "эллипс" на основе figure
	class ellips : virtual public figure {
		int rx,ry;

		public:
			// Конструктор:
			ellips (point d, int radx, int rady): figure (d) {
				rx = radx;
				ry = rady; 
			}
			
			void show() {
				ellipse(x, y, 0, 360, rx, ry);
				return;
			}
	};
	
// circ.fig - конкретный класс "окружность"
	class circ: virtual public figure {
		int radius;

		public:
			// Конструктор:
			circ (point e, int rad) : figure (e) {
				radius = rad; 
			}
			
			void show() { 
				circle(x, y, radius); 
			}
	};

	//Объекты класса - фигуры, включенные в односвязный список:
	class chain { 
		// объект - элемент в односвязном списке указатель на последний элемент в списке:
		static chain *last;
		chain *next;

		public:
			
			// указатель на фигуру, входящую в элемент списка:
			figure *pfig;
			
			// указатель на начало списка:
			static chain *begin;
			
			// конструктор:
			chain(figure *p);
			
			// функция изображает все фигуры списка:
			static void showAll(void);

			// конец определения класса
	};
	
	// Внешнее описание и инициализация статических компонентов класса:
	
	// начало списка
	chain *chain::begin = NULL; 

	// последний элемент в списке
	chain *chain::last = NULL; 

	// изображение элементов списка
	void chain::showAll(void) {

	// настройка на начало списка
	chain *uk = begin;

		// цикл до конца списка
		while (uk != NULL) {

			// нарисовать конкретную фигуру
			uk->pfig->show();

			// настройка на следующий элемент
			uk = uk->next;
		}
	}
	
	// конструктор создает и включает в список объект,
	// связав его с конкретной фигурой из класса, производного от абстрактного:

	// р - адрес включаемой фигуры
	chain:: chain(figure *p) {
		if (begin == NULL) // определили начало списка
			begin = this;
		else 
			last->next = this; // связь с предыдущим элеиентом

		pfig = p; // запоминаем адрес включаемой фигуры
		next = NULL; // пометим окончание списка
		last = this; // запоминаем адрес последнего элемента списка
	}
	
	int main() {
		point A(100, 80), B(300,200);
		circ C(A, 60);
		ellips E(B, 200, 100);
		{ 
			// переменные для инициализации графики:
			int dr = DETECT, mod;
			
			// инициализация графической системы:
			initgraph(&dr,	&mod, NULL);

			// изобразить точку - point::show()
			A.show (); getch(); 
			
			// изобразить точку
			B.show(); getch();
			
			// показать окружность - circ::show():
			C.show() ; getch() ;

			// включить в список первый элемент - окружность C:

			chain ca(&C);

			// показать эллипс - ellips::show()
			E.show(); getch(); 

			// включить в список эллипс
			chain ce(&E);
			
			// совместить фигуры - circ::figure::move():
			C.move(B); getch();
			
			// совместить фигуры - circ::figure::move():
			C.move(A); getch();
			
			// убрать эллипс - ellips::figure::hide():
			E.hide(); getch();
			
			// убрать окружность - circ::figure::hide():
			C.hide(); getch();
			
			// изобразить все фигуры из списка:
			chain::showAll();
			getch();
		}
		closegraph();
		return 0;
	}
