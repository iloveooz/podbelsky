//p6-32.cpp - прототип шаблона для семейства функций
#include <iostream>

using namespace std;

template <class D>
long count0(int, D*); // прототип шаблона



int main()
{
	int A[] = { 1, 0, 6, 0, 4, 10, 0, 0, 0, 1, 0, 4, 5, 7, 0 };
	int n = sizeof(A) / sizeof(A[0]);
	cout << "\ncount0(n, A) = " << count0(n, A);
	
	float X[] = { 10.0, 0.0, 3.3, 0.0, 2.1, 10.0, 0.0, 3.3, 0.0, 2.1 };
	n = sizeof(X) / sizeof(X[0]);
	cout << "\ncount0(n, X) = " << count0(n, X);
	
	cout << endl;
	return 0;
}
// шаблон функции для подсчёта количества нулевых элементов в массиве

template <class T>
	long count0(int size, T* array)
	{
		long k = 0;
		for (int i = 0; i < size; i++)
		if (int(array[i]) == 0) k++;
		return k;
	}
