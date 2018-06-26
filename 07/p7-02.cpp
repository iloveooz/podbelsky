//p7-02.cpp - размещение в памяти элементов структуры
#include <iostream>

using namespace std;

int main ()
{
	struct { 
		long L; 
		int i1, i2; 
		char c[4]; } 
	STR = {10l, 20, 30, 'a', 'b', 'c', 'd' };
	
	cout << "\n sizeof(STR) = " << sizeof(STR);
	cout << "\n &STR.L = " << &STR.L << "  " << STR.L;
	cout << "\n &STR.i1 = " << &STR.i1 << "  " << STR.i1;
	cout << "\n &STR.i2 = " << &STR.i2 << "  " << STR.i2;
	cout << "\n &STR.c = " << &STR.c << "  " << STR.c << endl;
	return 0;
}
