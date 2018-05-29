//p6-16.cpp - создание матрицы по заданной матрице
#include <iostream>

using namespace std;

// функция, определяющая значения элементов матрицы

int **reduction(int n, int m, int **matr, int k, int l)
{
	int ** p;  // указатель на формируемую матрицу
	int ii, jj;
	p = new (int * [n - 1]); // массив указателей на строки
	
	for (int i = 0; i < n - 1; i++)
		p[i] = new (int [m - 1]); // формирование i-тых строк
	// цикл перебора строк
	for (int i = 0, ii = 0; i < n - 1; i++, ii++)
		{
			if (i == k) ii++;  // пропускаем i-тую строку
			// цикл заполнения строки
			for (int j = 0, jj = 0; j < m - 1; j++, jj++)
				{ // пропускаем l-тый элемент в строке
					if ( j == l) jj++;
					p[i][j] = matr[ii][jj];
				}
		}
	return p;
}

const int A = 9, B = 5;

int main ()
<%
	int x[A][B], itr = 0;
	
	for (int i = 0; i < A; i++) // цикл заполнения матрицы
    {
		for (int j = 0; j < B; j++) x[i][j] = itr++;
    }
	
	int * px[A];
	
	for (int i = 0; i < A; i++)
		px[i] = (int *)&x[i];

	int n = (A - 1), m = (B - 1);
  
	int **ppm;
	ppm = reduction(A, B, px, 2, 3);
  
	for (int i = 0; i < n; i++) // цикл перебора строк
    {	cout << "\n Строка " << (i + 1) << ":";
		// цикл печати элементов строки
		for (int j = 0; j < m; j++)
			cout << "\t" << ppm[i][j];
    }
	// очистка динамической памяти
	for (int i = 0; i < n; i++)
		delete ppm[i];
	
	delete[] ppm;
	cout << endl;
	return 0;
%>
