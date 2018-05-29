//p6-13.cpp - вспомогательный массив указателей на массивы
#include <iostream>

using namespace std;

// функция транспонирования квадратных матриц
void trans(int n, double *p[])
{
	double x;
	for ( int i = 0; i < n - 1; i++)
		for ( int j = i + 1; j < n; j++)
			{
				x = p[i][j];
				p[i][j] = p[j][i];
				p[j][i] = x;
			}
}

int main ()
{ // заданный массив - матрица, подлежащая транспонированию
	double A[4][4] = { 	11, 12, 13, 14,
						21, 22, 23, 24,
						31, 32, 33, 34,
						41, 42, 43, 44 };
	// вспомогательный одномерный массив указателей
	double *ptr[] = { (double *)&A[0], (double *)&A[1], (double *)&A[2], (double *)&A[3] };
	int n = 4;
	
	cout << "\nДо транспонирования:";
		for (int i = 0; i < n; i++)
	{
		cout << "\n Строка " << (i + 1) << ":";
		for (int j = 0; j < n; j++)
			cout << "\t" << A[i][j];
    }
	
	cout << '\n';
	
	trans(n, ptr);
  
	// печать результатов обработки матрицы:
	
	cout << "\nПосле транспонирования:";
	for (int i = 0; i < n; i++)
	{
		cout << "\n Строка " << (i + 1) << ":";
		for (int j = 0; j < n; j++)
			cout << "\t" << A[i][j];
    }
	
	cout << '\n';
	
	for (int i = 0; i < n; i++)
    {
		cout << "\n Строка " << (i + 1) << ":";
		for (int j = 0; j < n; j++)
			cout << "\t" << ptr[i][j];
    }
	
	cout << '\n';
	return 0;
}
