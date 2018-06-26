//p3-16.cpp - потери информации при преобразовании типов
#include <iostream>

using namespace std;

int main() {

	long k = 123456789;
	float g = (float) k;

	cout << "\n k = " << k;
	cout << "\n g = " << g;

	k = (long) g;
	cout << "\n k = " << k;

	g = (float)2.222222e+02;
	int m = (int) g;

	cout << "\n g = " << g;
	cout << "\n m = " << m;

	g = (float) m;
	cout << "\n g = " << g << endl;

return 0;
}
