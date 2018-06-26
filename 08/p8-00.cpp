//p8-00.cpp - пример работы с препроцессорными командами

#include <iostream>

//#define K div
#define STROKA "Съешь ещё этих мягких французских булок!"
#define K 2
#define vyvod cout << "Вывод на экран элементов массива размерности = " << K << endl;

using namespace std;

int main()
{
	int massiv[K][K] = { 0, 1, 2, 3 };
	vyvod;
	cout << STROKA << '\n';
	cout << massiv[0][0] << ' ';
	cout << massiv[0][1] << ' ';
	cout << massiv[1][0] << ' ';
	cout << massiv[1][1] << ' ';
	cout << '\n';
	
	return 0;
}

#undef K
#define K 22
