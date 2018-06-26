// p9-11.cpp - компонентная функция для перегрузки операции '+'
#include </opt/libgraph/include/graphics.h>

	// точка на экране
	class point1 {
		// защищенные компоненты (данные) класса:
		protected:
		
			// координаты точки
			int x, y;
		
		// общедоступные принадлежащие классу функции:
		public:
			// конструктор
			point1(int xi = 10, int yi = 10) {
				x = xi;
				y = yi;
			}
			
			// изобразить точку на экране:
			void show(void) {
				putpixel(x, y, getcolor());
			}
			
			// прототип компонентной операции-функции:
			point1 operator + (point1& p);
		};
		
		// внешнее определение компонентной операции-функции:
		 point1 point1::operator + (point1 &p) {
			point1 d;
			d.x = this->x + p.x;
			d.y = this->y + p.y;
			return d;
		}
				
		int main() {
			//cout << '\n';
			// переменные для инициализации графики:
			int dr = DETECT, mod;
			
			// создаются ещё невидимые точки:
			point1 A(200, 50);
			
			// точка создаётся с параметрами по умолчанию
			point1 B;
			
			point1 D(50, 120);
			
			// инициализация графической системы:
			initgraph (&dr, &mod, NULL);
			
			// отображение на экране точки A
			A.show();
			getch();
			
			B.show();
			getch();
			
			D.show();
			getch();
			
			// неявное обращение к операции функции
			B = A + D;
			
			B.show();
			getch();
			
			// явный вызов операции-функции
			B = A.operator + (B);
			
			B.show();
			getch();
			
			closegraph();
			return 0;
		}
		
		
