//p5-16.cpp - адреса элементов многомерных массивов
#include <iostream>

using namespace std;

int main()
{
	int ARRAY[40][80][600];
	
	cout << "\n &ARRAY[0] = " << &ARRAY[0];
	cout << "\n &ARRAY[1] = " << &ARRAY[1];
	cout << "\n &ARRAY[2] = " << &ARRAY[2];
	cout << "\n &ARRAY[3] = " << &ARRAY[3];

	cout << "\n &ARRAY[2][2][2] = " << &ARRAY[2][2][2];
	cout << "\n &ARRAY[2][2][3] = " << &ARRAY[2][2][3];

	cout << "\n\"Расстояние\":\n (unsigned long)&ARRAY[0][0][2] - (unsigned long)&ARRAY[0][0][1] = " <<
		(unsigned long)&ARRAY[0][0][2] - (unsigned long)&ARRAY[0][0][1];
	
	cout << "\n\"Расстояние\":\n (unsigned long)&ARRAY[1] - (unsigned long)&ARRAY[0] = " <<
		(unsigned long)&ARRAY[1] - (unsigned long)&ARRAY[0];
		
	cout << "\n" << sizeof(ARRAY) << endl;
	return 0;
}
