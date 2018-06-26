// p10-02.cpp - окружность в квадрате множественное наследование
#include </opt/libgraph/include/graphics.h>

	// circ.cpp - определение класса окружность 
	class circ { 
		// координаты центра и радиус окружности
		int xc, yc, rc;
		
		public:
			// конструктор
			circ(int xi, int yi, int ri) {
				xc = xi;
				yc = yi; 
				rc = ri;
			}
			
			// изобразить окружность на экране:
			void show () {
				circle(xc, yc, rc);
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
				circle (xc, yc, rc);
				
				// восстановить цвет изображения:
				setcolor(cc);
		}
	};
	
	// square.cpp - определение класса квадрат
	class square {
		// координаты центра квадрата и длина стороны квадрата
		int xq, yq, lq;
		
		// вспомогательная функция рисования:
		void rissquare(void) {
			int d = lq;
			line(xq + d, yq + d, xq - d, yq + d);
			line(xq + d, yq - d, xq - d, yq - d);
			line(xq + d, yq + d, xq + d, yq - d);
			line(xq - d, yq + d, xq - d, yq - d);
		}
			
		public:
			// конструктор
			square(int xi, int yi, int li) {
				xq = xi;
				yq = yi; 
				lq = li;
			}
			
			// изобразить окружность на экране:
			void show () {
				rissquare();
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
				
				// рисуем квадрат цветом фона:
				rissquare ();
				
				// восстановить цвет изображения:
				setcolor(cc);
		}
	};

// производный класс - "окружность, вписанная в квадрат";
// класс circsqrt наследует только методы обоих базовых классов
// в нём нет наследуемых данных

	class circsqrt : public circ, public square {
		public:
			// конструктор
			circsqrt(int xi, int yi, int ri) :
				// явно вызываются конструкторы базовых классов
				circ(xi, yi, ri),
				square(xi, yi, ri)
			{ }
			
			void show () {
				circ::show();
				square::show();
			}
			
			// убрать изображение с экрана
			void hide() {
				circ::hide();
				square::hide();
			}
	};			
			
	int main() {
		int dr = DETECT, mod;
		initgraph(&dr, &mod, NULL);
		
		circsqrt A1(100, 100, 60);
		circsqrt F4(400, 300, 50);
		
		A1.show(); getch();
		F4.show(); getch();
		
		F4.hide(); getch();
		A1.hide(); getch();
		
		closegraph();
		
		return 0;
	}
	
