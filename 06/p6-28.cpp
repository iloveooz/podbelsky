//p6-28.cpp - ссылки на элементы "двухмерных" массивов
#include <iostream>

using namespace std;

// функция возвращает ссылку на обозначенный элемент матрицы
float & elem(float **matr, int k, int l)
{ return matr[k][l]; }

// функция заполняет матрицу значениями от 1 до 9
void matrix(int n, int m, float **pmatr)
{ int k = 0;
  for (int i = 0; i < n; i++)
    for ( int j = 0; j < m; j++)
      elem(pmatr, i, j) = k++ % 19 + 1;  }

// функция выбирает адрес максимального элемента матрицы
float & maxelem(int n, int m, float ** pmatr)
{ int im = 0, jm = 0;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      { if (pmatr[im][jm] >= pmatr[i][j]) continue;
        im = i; jm = j;
      }
  return pmatr[im][jm];  }

// функция печатает матрицу по строкам
void matr_print(int n, int m, float **pmatr)
{ for ( int i = 0; i < n; i++)
    { cout << "\n Строка " << (i + 1) << ":";
      for (int j = 0; j < m; j++)
        cout << "\t" << pmatr[i][j];
    }
}

int main ( )
{
	float z[3][4];
	float *ptr[] = {(float *) & z[0], (float *) & z[1], (float *) & z[2] };
	
	matrix(3, 4, ptr); // заполняем матрицу
	matr_print(3, 4, ptr); // печатаем исходную матрицу
	
	for (int i = 0; i < 4; i++) // обнуляем четыре исходных элемента
		maxelem(3, 4, ptr) = 0.0;
	
	cout << endl;
	matr_print(3, 4, ptr);  // печать измененной матрицы
	
	cout << endl;
	return 0;
}
