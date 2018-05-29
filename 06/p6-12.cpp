//p6-12.cpp - многомерный массив в качестве параметра
#include <iostream>

using namespace std;

// очень неудачная функция для транспонирования параметров
void transp(int n, float d[][3])
{
	float r;
	for ( int i = 0; i < n - 1; i++)
		for ( int j = i + 1; j < n; j++)
        {
			r = d[i][j];
			d[i][j] = d[j][i];
			d[j][i] = r;
        }
}

int main ()
{
	float x[3][3] = {	0, 1, 1,
						2, 0, 1,
						2, 2, 0 };
	int n = 3;

	for (int i = 0; i < n; i++) // цикл перебора строк
	{
		cout << "\nСтрока " << (i + 1) << ":";
	for (int j = 0; j < n; j++) // цикл печати элементов строки
		cout << "\t" << x[i][j];
	}

	transp(3, x);
	cout << '\n';
	
	for (int i = 0; i < n; i++) // цикл перебора строк
	{
		cout << "\nСтрока " << (i + 1) << ":";
	for (int j = 0; j < n; j++) // цикл печати элементов строки
		cout << "\t" << x[i][j];
	}
	
	cout << '\n';
	return 0;
}
