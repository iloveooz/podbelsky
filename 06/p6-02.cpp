//p6-02.cpp - заданное количество необязательных параметров
//функция суммирует значения своих параметров типа int
#include <iostream>

using namespace std;

long summa(int k, ...) // k - число суммируемых параметров
{
	int *pik = &k;
	long total = 0;
	for (; k; k--) total += *(++pik);
	return total;
}

int main()
{
	cout << "\n summa(2, 6, 4) = " << summa(2, 6, 4);
	cout << "\n summa(6, 1, 2, 3, 4, 5, 6) = " << summa(6, 1, 2, 3, 4, 5, 6) << endl;
	return 0;
}
