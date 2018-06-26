// member.h - элементы двухсвязного списка
class member {
	// адрес последнего элемента списка:
	static member *last_memb;
	
	// на предыдущий элемент списка
	member *prev;
	
	// на следующий элемент списка
	member *next;
	
	// содержимое (значение) элемента списка
	char bukva;
	
	public:
	
	// функции для работы со списком:
	// конструктор
	member (char cc) {
		bukva = cc;
	}
	
	// добавление элемента в конец списка:
	void add(void);
	
	// вывод содержимого списка на экран:
	static void reprint(void);
	
	// вывод содержимого объекта на экран
	void simple_print(void);
};
