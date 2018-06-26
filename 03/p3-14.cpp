//p3-14.cpp - порядок вычисления физических параметров
#include <iostream>

using namespace std;

int m = 5;

void p(int i, int j, int k) {
	cout << "\ni = " << i << ", j = " << j << ", k = " << k;
	cout << "\nВнутри функции p(...) m = " << m;
}


int main() {
	void p(int, int, int);

	p(m++, (m = m * 5, m * 3), --m);
	// (21 , (20, 60) , 4)
	cout << "\nВ главной программе после вызова p(...)";
	cout << " m = " << m << endl;
return 0;
}
