//p5-03.cpp - выбор данных из памяти с помощью разных указателей
#include <iostream>

using namespace std;

int main()
{
	unsigned long L = 0x12345678L;
	float test = 1.05;
	
	char *cp = (char *)&L; // *cp равно 0x78
	int *ip = (int *)&L;   // *ip равно 0x5678
	long *lp = (long *)&L; // *lp равно 0x12345678

	cout << hex; // шестнадцатеричное представление выводимых значений
	
	cout << "\nАдрес L, T.e. &L = " << &L;
	cout << "\ncp = " << (void *)cp << "\t*cp = 0x" << (int)*cp;
	cout << "\nip = " << (void *)ip << "\t*ip = 0x" << *ip;
	cout << "\nlp = " << (void *)lp << "\t*lp = 0x" << *lp << endl;
	
	float *test_ptr = &test;
	
	cout << "test = " << test << endl;
	cout << "*test_ptr = " << *test_ptr << endl;
	cout << "test_ptr = " << test_ptr << endl;
	cout << "&test = " << &test << endl;
		
	return 0;
}
