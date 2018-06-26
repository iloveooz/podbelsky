//p7-03.cpp - размещение в памяти объединения
#include <iostream>

using namespace std;

int main ()
{
	union { 
		unsigned long L; 
		float f1; 
		} UNION;
	
	cout << "\nsizeof(UNION) = " << sizeof(UNION);
	//int i = 0, a;
	
	UNION.f1 = 3.141593;
	
	cout << "\n&UNION.L = " << &UNION.L << "  " << "== " << UNION.L;
	cout << "\n&UNION.f1 = " << &UNION.f1 << "  " << "== " << UNION.f1;
	
	//cout << "\n&UNION.i2 = " << &UNION.i2 << "  " << "== " << (UNION.i2);
	//cout << "\n&UNION.c = " << &UNION.c << "  " << "== " << UNION.c;
	
	cout << "\nsizeof(UNION.f1) = " << sizeof(UNION.f1);
	cout << "\nsizeof(UNION.L) = " << sizeof(UNION.L) << endl; 
	//cin >> a;
	

	return 0;
}
