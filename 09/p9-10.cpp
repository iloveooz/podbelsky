// p9-10.cpp - расширение действия (перегрузка) операции "+"

// определение класса "символьные строки"

#include "stroka.cpp"

	// прототип функции для расширения действия операции "+"
	stroka& operator +(stroka& A, stroka& B);
	
	int main() {
		stroka X("Qui ");
		stroka Y("Vivra ");
		stroka Z("Verra!");
		
		stroka W(" - Поживём - увидим!");
		
		stroka C;
		
		C = operator + (X, Y);
		C = operator + (C, Z);
		C = operator + (C, W);
		
		
		C.display();
		
		cout << '\n';
		return 0;
	}
	
	// расширение действия операции + на строковые операнды:
	stroka& operator +(stroka& a, stroka& b) {
		int size = a.len_str() + b.len_str();
		
		// вспомогательный указатель:
		stroka *ps;
		
		// создаём объект в динамической памяти
		ps = new stroka(size);
		
		// копируем строку из "а":
		strcpy(ps->string(), a.string());
		
		// присоединяем строку из "b":
		strcat(ps->string(), b.string());
		
		// записываем значение длины строки
		ps->len_str() = size;
		
		// возвращаем новый объект stroka
		return *ps;
	}
	
