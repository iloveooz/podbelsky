//p5-20.cpp - единичная диагональная матрица с изменяемым порядком
#include <iostream>

using namespace std;

int main()
{
	int n; // порядок матрицы
  
	cout << "\nВведите порядок матрицы: ";
	cin >> n;     // определяются размеры матрицы
  
	float **matr; // указатель для массива указателей
  
	matr = new float *[n]; // массив указателей float *
  
	if (matr == NULL)
    {
		cout << " Динамический массив НЕ создан!" << endl;
		return 1;
    }
     
	for (int i = 0; i < n; i++)
    { // строка-массив в значении типа float:
		matr[i] = new float [n];
		if (matr[i] == NULL)
		{
			cout << "Динамический массив НЕ создан!" << endl;
			return 1;
		}
		
		for (int j = 0; j < n; j++)
		// заполнение матрицы
		if (i != j) matr[i][j] = 0;
			else
				matr [i][j] = 1;
	}
      
	for (int i = 0; i < n; i++)
    {
		cout << "\nСтрока " << (i + 1) << ":";
		if (i < 9) {cout << " ";};
		
		for (int j = 0; j < n; j++) cout << "  " << matr[i][j];
	}
	
    cout << endl;
	
	for (int i = 0; i < n; i++) delete matr[i];
	
	delete [] matr;
	return 0;
}
