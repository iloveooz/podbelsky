//p5-07.cpp - увеличение указателя
#include <iostream>

using namespace std;

int main()
{
	float zero = 0.0, pi = 3.141593, Euler = 2.718282;
	float *ptr = &Euler;

	cout << "\n ptr = " << ptr << " &ptr = " << &ptr << " *ptr = " << *ptr;
	cout << "\n(ptr + 1) = " << (ptr + 1) << " *(ptr + 1) = " << *(ptr + 1);
	cout << "\n(ptr + 2) = " << (ptr + 2) << " *(ptr + 2) = " << *(ptr + 2) << endl;
	cout << "\n(ptr + 3) = " << (ptr + 3) << " *(ptr + 3) = " << *(ptr + 3) << endl;
	cout << "\n(ptr + 4) = " << (ptr + 4) << " *(ptr + 4) = " << *(ptr + 4) << endl;
	cout << "\n(ptr + 5) = " << (ptr + 5) << " *(ptr + 5) = " << *(ptr + 5) << endl;
	cout << "\n(ptr + 6) = " << (ptr + 6) << " *(ptr + 6) = " << *(ptr + 6) << endl;
	cout << "\n(ptr + 7) = " << (ptr + 7) << " *(ptr + 7) = " << *(ptr + 7) << endl;
	cout << "\n(ptr + 8) = " << (ptr + 8) << " *(ptr + 8) = " << *(ptr + 8) << endl;
	cout << "\n(ptr + 9) = " << (ptr + 9) << " *(ptr + 9) = " << *(ptr + 9) << endl;
	cout << "\n(ptr + 10) = " << (ptr + 10) << " *(ptr + 10) = " << *(ptr + 10) << endl;
	return 0;
}
