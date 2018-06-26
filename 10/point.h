	// point.h - описание класса с внешними определениями методов

	#ifndef POINTH
	#define POINTH 1

	// класс - точка на экране дисплея
	class point {
		// защищенные данные класса
		protected:
		
		// координаты точки
		int x, y;
		
		// прототипы общедоступных компонентных функций:
		public:
		
		// конструктор
		point (int xi = 0, int yi = 0);	
		
		// доступ к x
		int& givex(void);
		
		// доступ к y 
		int& givey(void);
		
		// изобразить точку на экране
		void show(void);
		
		// переместить точку в новое место на экране
		// (xn == 0, yn == 0 - умалчиваемые значения параметров)
		void move(int xn = 0, int yn = 0);
		
		// собственная функция класса:
		private:
		
		// убрать с экрана изображение точки
		void hide();
	};

	#endif 
