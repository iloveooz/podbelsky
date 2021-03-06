//p6-14.cpp - матрица как набор одномерных массивов
#include <iostream>

using namespace std;

// функция, определяющая значения элементов матрицы
void fill(int n, int** mat)
{
	int k = 1;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			mat[i][j] = k++;
}

// динамические массивы для представления матрицы
int main ()
{ 
	int **pi;  // указатель на массив указателей
	int m = 0; // размеры массивов, т.е. порядок матрицы
	
	cout << "Введите размерность матрицы - "; cin >> m;
	
	pi = new int * [m]; // вспомогательный массив указателей
  
	for (int i = 0; i < m; i++)
		pi[i] = new int [m]; // формируем строки (одномерные массивы)
  
	fill(m, pi); // заполнение матрицы
	
	for (int i = 0; i < m; i++) // цикл перебора строк
	{
		cout << "\n Строка " << (i + 1) << ":";
		// цикл печати элементов строки
		for (int j = 0; j < m; j++)
			cout << "\t" << pi[i][j];
	}
  
	for (int i = 0; i < m; i++)
		delete pi[i];
    
    delete[] pi;
    
    cout << "\n";
	return 0;
}
