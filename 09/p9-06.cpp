// p9-06.cpp - статические компоненты, указатель this
#include <iostream>
#include "member.cpp"

using std::cout;

	// инициализация статического компонента (указателя):
	member *member::last_memb = NULL;

int main() {
	// формирование объектов класса member:
	member A('a');
	member B('b');
	member C('c');
	member D('d');

	// вызов статической компонентной функции:
	member::reprint();

	// включение созданных объектов в двухсвязный список:
	A.add();
	B.add();
	C.add();
	D.add();

	// печать в обратном порядке значений элементов списка:
	member::reprint();
	
	// печать значений элементов списка
	cout << "sizeof(A) = " << sizeof(A) << '\n';
	A.simple_print();
	
	cout << "sizeof(B) = " << sizeof(B) << '\n';
	B.simple_print();
	
	cout << "sizeof(C) = " << sizeof(C) << '\n';
	C.simple_print();
	
	cout << "sizeof(D) = " << sizeof(D) << '\n';
	D.simple_print();
	
	
	cout << '\n';
	return 0;
}
