// member.cpp - определение функций класса member
#include <iostream>
#include <stdio.h> // для описание нулевого указателя NULL

#include "member.h"

using std::cout;

	// добавление элемента в конец списка:
	void member::add(void) {
		if (last_memb == NULL) {
			this->prev = NULL;
			last_memb = prev;
			cout << " Значение last_memb = " << last_memb << '\t';
			cout << " Значение bukva = " << bukva << '\n';
		}
		else {
			cout << "Это условие вообще когда-нибудь выполняется?!" << '\n';
			last_memb->next = this;
			this->prev = last_memb;
			last_memb = this;
			this->next = NULL;
		}
	}

	void member::reprint(void) {
		member *uk; // вспомогательный указатель
		uk = last_memb;
		if (uk == NULL) { cout << "\n Список пуст! \n";; }
		else cout << "\n Содержимое списка: \n";

		// цикл печати в обратном порядке значений элементов списка
		while (uk != NULL) {
			cout << uk->bukva << "\t!";
			uk = uk-> prev; 
		}
	}
	
	void member::simple_print(void) {
		cout << " Значение *prev = " << prev << '\n';
		cout << " Значение bukva = " << bukva << '\n';
		cout << " Значение *next = " << next << '\n';
	}
	
