//p6-11.cpp - функция, которая возвращает указатель на массив
#include <iostream>

using namespace std;

// функция "слияния" двух неупорядоченных массивов

int *fusion(int n, int* a, int m, int* b)
{
	int *x = new int[n + m]; // массив с результатов
	int ia = 0, ib = 0, ix = 0;
	
	while (ia < n && ib < m) // цикл до конца одного из массивов
		if (a[ia] > b[ib]) x[ix++] = b[ib++];
			else x[ix++] = a[ia++];
   
   if (ia >= n) // переписан массив a[]
	while (ib < m) x[ix++] = b[ib++];
		else       // переписан массив b[]
			while (ia < n) x[ix++] = a[ia++];
   return x;
}

int main ()
{
	int c[] = { 16, 32, 55, 71, 92 };
	int d[] = { 30, 42, 55, 56, 98 };
	
	int *h; // указатель для массива с результатом
	
	int kc = sizeof(c) / sizeof(c[0]); // количество элементов в c[]
	int kd = sizeof(d) / sizeof(d[0]); // количество элементов в d[]
	
	h = fusion(kc, c, kd, d);
  
	cout << "\nРезультат объединения массивов:\n";
	
	for (int i = 0; i < kc + kd; i++) cout << "   " << h[i];
	delete[] h;
  
	cout << endl;
	return 0;
}
