// point.cpp - внешнее определение класса

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
			circle(x, y, radius);
		}
		
		// переместить точку в новое место на экране
		// (xn == 0, yn == 0 - умалчиваемые значения параметров)
		void move(int xn = 0, int yn = 0, int radiusn = 5) {
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
			putpixel (x, y, getbcolor()); 
		}
	};
